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
    auto is_prime = [](ll num){
        if(num < 2)return false;
        for(ll j = 2; j * j <= num; j++){
            if(num % j == 0)return false;
        }
        return true;
    };
    for(ll i = 2; i <= n; i++){
        if(is_prime(i))
            cout << i << " ";
    }
    return 0;
}
