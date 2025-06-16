#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    ll rev_n = stoll(r);
    cout << rev_n << endl;
    cout << ((s == r) ? "YES" : "NO") << endl;
    return 0;
}
