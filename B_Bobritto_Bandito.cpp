#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m, l, r;
        cin >> n >> m >> l >> r;
        if ((l * m) % n >= 1) {
            cout << (l * m) / n + 1 << " ";
        } else {
            cout << (l * m) / n << " ";
        }
        if ((r * m) % n >= 1) {
            cout << (r * m) / n + 1 << endl;
        } else {
            cout << (r * m) / n << endl;
        }
    }
 
}