#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b;
    while(cin >> a >> b){
        if(a <= 0 || b <= 0)
            break;
        ll sum = 0;
        ll start = min(a, b);
        ll end = max(a, b);
        for(ll i = start; i <= end; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
