/*
Basic Math And Again Number Theory(D) | YouKn0wWho Academy
    CodeForces - 1285C 
    Fadi and LCM  
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
    ll n, a = 1e15, b = 1e15; cin>>n;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            if(gcd(i,n/i)==1 && max(i,n/i)<max(a,b)){
                a = i;
                b = n/i;
            }
        }
    }
    cout<< a << ' ' << b <<endl;
    return 0;
}