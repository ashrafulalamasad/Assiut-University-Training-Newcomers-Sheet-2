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
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
