#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll pass, target = 1999;
    while(cin >> pass){
        if (pass == target){
            cout << "Correct" << endl;
            break;
        }
        else
            cout << "Wrong" << endl;
    }
    return 0;
}
