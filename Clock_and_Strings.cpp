#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int n = 0;

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        if (c > d) {
            int temp = c;
            c = d;
            d = temp;
        }

        if (a < c && c < b && b < d) n = 1;
        if (c < a && a < d && d < b) n = 1;

        cout << (n ? "YES" : "NO") << endl;
    }
}