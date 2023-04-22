/*
Basic Math And Again Number Theory(E) | YouKn0wWho Academy
    CodeForces - 987B 
    High School: Become Human  
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
    int a,b; cin>> a>> b;
    long double x, y; 
    x = b * log(a);
    y = a * log(b);
    if(x>y) cout<<'>';
    else if(x<y) cout<< '<';
    else cout<< '=';
    return 0;
}