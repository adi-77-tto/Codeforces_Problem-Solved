#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<long long> div6, div2, div3, others;
 
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
 
            if(x % 6 == 0) div6.push_back(x);
            else if(x % 2 == 0) div2.push_back(x);
            else if(x % 3 == 0) div3.push_back(x);
            else others.push_back(x);
        }
 
        for(long long x : div6) cout << x << " ";
        for(long long x : div2) cout << x << " ";
        for(long long x : others) cout << x << " ";
        for(long long x : div3) cout << x << " ";
 
        cout << "\n";
    }
 
 
}