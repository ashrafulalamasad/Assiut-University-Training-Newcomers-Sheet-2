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
    for(ll i = n; i >= 1; i--){
        for(ll j = i; j >= 1; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}
