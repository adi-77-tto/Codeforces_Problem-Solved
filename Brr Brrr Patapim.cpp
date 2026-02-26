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
        ll n,sum=0;
        cin >> n;
        vector<ll> p(2*n+1);
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                ll arr;
                cin >> arr;
                p[i+j]=arr;
            }
        }
        for(ll i=1;i<=2*n;i++)
        {
            sum+=p[i];
        }
        p[1]=((2*n*(2*n+1))/2)-sum;
        for(ll i=1;i<=2*n;i++) cout << p[i] <<" ";
        cout << endl;
    }
}