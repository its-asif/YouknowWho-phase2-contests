/*
Basic Number Theory (Q) | YouKn0wWho Academy
    LightOJ - 1014
    Iftar Party
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define testcase ll t; cin>>t; while(t--)
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    ll x=1;
    testcase{
        ll p,l; cin>>p>>l;
        vector<ll> v;
        ll n = p-l;
        for (ll i = 1; i*i <= n; i++)
        {
            if(n%i!=0) continue;

            if(i>l) v.push_back(i);
            if(n/i>l && n/i!=i) v.push_back(n/i);
            else break;
        }
        
        sort(v.begin(), v.end());
        cout<<"Case "<<x<< ":"; x++;
        if(v.size()==0){
            cout<<" impossible"<<endl;
            continue;
        }
        for(auto i: v) cout<<" "<<i;
        cout<<endl;
    }
}