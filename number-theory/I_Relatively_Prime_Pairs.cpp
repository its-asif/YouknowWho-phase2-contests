/*
Basic Number Theory (I) | YouKn0wWho Academy
    CodeForces - 1051B 
    I - Relatively Prime Pairs 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a,b; cin>>a>>b;
    cout<<"YES"<<endl;
    for(ll i=a; i<=b;i+=2)
        cout<<i<<' '<<i+1<<endl;
    return 0;
}