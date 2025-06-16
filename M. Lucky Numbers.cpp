#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isLucky(int num){
    while (num){
        if(num % 10 != 4 && num % 10 != 7)
            return false;
        num /= 10;
    }
    return true;
}

int main()
{
    fast;
    ll a, b;
    cin >> a >> b;
    bool found = false;
    for(ll i = a; i <= b; i++){
        if(isLucky(i)){
            cout << i << " ";
            found = true;
        }
    }
    if(!found)
        cout << -1;
    return 0;
}
