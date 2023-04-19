/*
Basic Math And Again Number Theory(K) | YouKn0wWho Academy
    LightOJ - 1214 
    Large Division  
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
    testcase{
        string a; cin>> a;
        int b,i=0; cin>> b;
        ll cur=0;
        if( a[0] == '-' ) i++;
        for( i; i< a.size(); i++){
            cur = cur * 10 + ( a[i] - '0' );
            cur %= b;
        }
        cout<<"Case "<<tt<<": ";
        if(cur==0) cout<< "divisible" <<endl;
        else cout<< "not divisible" <<endl;
    }
    return 0;
}