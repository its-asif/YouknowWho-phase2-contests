/*
Basic Math And Again Number Theory(I) | YouKn0wWho Academy
    LightOJ - 1078 
    Integer Divisibility  
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
        int n,k,digits=0; cin>>n>>k;
        int num = k;
        while(num%n){
            digits++;
            num %= n;
            num = num*10 + k;
        }
        cout<<"Case "<<tt<<": "<<digits+1<<endl;
    }
    return 0;
}