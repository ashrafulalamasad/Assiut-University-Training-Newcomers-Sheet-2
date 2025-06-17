#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k, s, count = 0;
    cin >> k >> s;
    for(ll a = 0; a <= k; a++){
        for(ll b = 0; b <= k; b++){
            ll c = s - a - b;
            if(c >= 0 && c <= k)
                count++;
        }
    }
    cout << count;
    return 0;
}
