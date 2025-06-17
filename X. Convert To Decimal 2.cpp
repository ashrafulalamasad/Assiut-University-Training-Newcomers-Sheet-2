#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n;
        cin >> n;
        string s = bitset<64>(n).to_string();
        string r = "";
        ll ans = 0;
        for(ll i = 0; i < s.size(); i++){
            if(s[i] == '1')
                r += '1';
        }
        for(ll i = 0; i < r.size(); i++){
            ans += (ll)pow(2, r.size() - i - 1);
        }
        cout << ans << endl;
    }
    return 0;
}
