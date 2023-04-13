/*
Basic Number Theory (U) | YouKn0wWho Academy
    CodeChef - FLOW016 
    GCD and LCM  
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; while(t--)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

int main(){
    testcase{
        int a,b; cin>>a>>b;
        cout<<__gcd(a,b)<<' '<< lcm(a*1LL,b*1LL)<<endl;
    }
}
