/*
Basic Number Theory (B) | YouKn0wWho Academy
    CodeForces - 762A 
    k-th divisor 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k; cin>>n>>k;
    vector<ll> v;
    for (ll i = 1; i*i <= n; i++)
    {
        if(n%i==0){ 
            v.push_back(i);
            if(i!=n/i)v.push_back(n/i);
        }
    }
   if(k>v.size()) cout<<-1;
   else{
    sort(v.begin(),v.end());
    cout<<v[k-1];
   } 
}