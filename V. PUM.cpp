#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, start = 1;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cout << start << " " << start + 1 << " " << start + 2 << " PUM" << endl;
        start += 4;
    }
    return 0;
}
