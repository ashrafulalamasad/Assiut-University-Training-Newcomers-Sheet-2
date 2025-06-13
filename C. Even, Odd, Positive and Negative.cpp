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
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll even = 0, odd = 0, pos = 0, neg = 0;
    for(ll i = 0; i < n; i++){
        if((arr[i])% 2 == 0)
            even++;
        if((arr[i])% 2 != 0)
            odd++;
        if(arr[i] > 0)
            pos++;
        if(arr[i] < 0)
            neg++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}
