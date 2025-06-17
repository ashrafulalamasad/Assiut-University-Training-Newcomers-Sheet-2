#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, a, b, sum1 = 0;
    cin >> n >> a >> b;
    for(ll i = 1; i <= n; i++){
        ll sum2 = 0;
        ll temp = i;
        while(temp){
            sum2 += temp % 10;
            temp /= 10;
        }
        if(sum2 >= a && sum2 <= b){
            sum1 += i;
        }
    }
    cout << sum1 << endl;
    return 0;
}
