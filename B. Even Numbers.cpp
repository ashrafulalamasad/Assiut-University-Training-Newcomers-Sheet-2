#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n;
    cin >> n;
    if(n < 2)
        cout << -1 << endl;
    else
        for(ll i = 2; i <= n; i += 2)
            cout << i << endl;
    return 0;
}
