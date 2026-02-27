#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const int MAX = 1000001;
    vector<int> e(MAX);
    for (int i = 0; i < MAX; i++)
    {
        e[i] = i;
    }
    for (int i = 2; i * i < MAX; i++)
    {
        if (e[i] == i)
        {
            for (int j = i * i; j < MAX; j += i)
            {
                if (e[j] == j)
                {
                    e[j] = i;
                }
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr)
            cin >> x;
        bool isSorted = true;
        for (int i = 0; i + 1 < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                isSorted = false;
                break;
            }
        }
        if (isSorted)
        {
            cout << "Bob\n";
            continue;
        }
        bool aliceWins = false;
        for (int i = 0; i < n && !aliceWins; i++)
        {
            int x = arr[i];
            if (x <= 1)
                continue;
            int firstPrime = e[x];
            x /= firstPrime;
            while (x > 1)
            {
                if (e[x] != firstPrime)
                {
                    aliceWins = true;
                    break;
                }
                x /= e[x];
            }
        }
        if (aliceWins)
        {
            cout << "Alice\n";
            continue;
        }
        vector<int> reduced(n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                reduced[i] = 1;
            else
                reduced[i] = e[arr[i]];
        }
        bool bobWins = true;
        for (int i = 0; i + 1 < n; i++)
        {
            if (reduced[i] > reduced[i + 1])
            {
                bobWins = false;
                break;
            }
        }
        cout << (bobWins ? "Bob" : "Alice") << "\n";
    }
}