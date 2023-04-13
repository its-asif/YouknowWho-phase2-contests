/*
Basic Number Theory (U) | YouKn0wWho Academy
    Gym - 310911H 
    Just Solve It! (4)   
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; while(t--)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    ll n,m,a,b; cin>>n>>m>>a>>b;
    ll lc = lcm(n,m),cnt=0;
    if(n/gcd(a,b) > b/m)
        cout<<0;
    else
        cout<<(b/lc)-((a-1)/lc); 
}
