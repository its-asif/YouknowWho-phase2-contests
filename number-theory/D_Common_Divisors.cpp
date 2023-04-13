/*
Basic Number Theory (U) | YouKn0wWho Academy
    CodeForces - 1203C 
    Common Divisors  
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
    int n; cin>>n;
    ll gc=0;
    for(int i=0; i<n; i++){
        ll x; cin>>x;
        gc = gcd(gc,x);
    }
    int cnt=0;
    for(ll i=1; i*i<=gc; i++){
        if(gc%i==0) {
            cnt++;
            if(i!=gc/i) cnt++;
        }
    }
    cout<<cnt;
}
