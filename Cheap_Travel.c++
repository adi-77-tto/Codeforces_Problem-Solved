#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;

void solve() 
{
    ll n,m,a,b;
    cin >> n >> m >> a >> b;
    if(m>=n) cout << min((n*a),b) << endl;
    else cout << min((n*a),((n/m)*b+min((n%m)*a,b)))<< endl;
}
int main()
 {
    solve();
 }

 
