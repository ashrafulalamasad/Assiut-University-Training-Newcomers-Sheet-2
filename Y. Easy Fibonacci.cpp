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
    ll a = 0, b = 1, c;
    for(ll i = 0; i < n; i++){
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
