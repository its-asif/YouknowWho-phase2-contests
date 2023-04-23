/*
Basic Math And Again Number Theory(F) | YouKn0wWho Academy
    CodeForces - 678C 
    Joty and Chocolate  
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
    ll n, a, b, x, y; cin>> n >> a >> b >> x >> y;
    ll cmn = lcm( a, b);
    ll cntcmn = n / cmn;
    ll cnta = n / a - cntcmn;
    ll cntb = n / b - cntcmn;
    ll ans = cnta * x + cntb * y + cntcmn * max(x,y);
    cout<< ans << endl;
    return 0;
}