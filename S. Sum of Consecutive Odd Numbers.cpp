#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, y, sum = 0;
        cin >> x >> y;
        ll start = min(x, y);
        ll end = max(x, y);
        for(ll i = start + 1; i < end; i++){
            if(i % 2 != 0){
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
