/*
Basic Number Theory (Y) | YouKn0wWho Academy
    CodeChef - CHAPD 
    Chef and Prime Divisors 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; for(int tt=1;tt<=t;tt++)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    testcase{
        ll a,b; cin>>a>>b;
        ll gc = gcd(a,b);
        b/=gc;
        while(gc>1 && b>1){
            gc= gcd(gc,b);
            b= b/gc;
        }
        if(gc==1 && b>1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
