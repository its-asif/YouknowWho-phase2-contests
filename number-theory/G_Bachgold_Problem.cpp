/*
Basic Number Theory (G) | YouKn0wWho Academy
    CodeForces - 749A 
    Bachgold Problem    
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
    cout<<n/2<<endl;
    if(n%2==0){
        for(int i=1;i<=n/2;i++){
            cout<<2<<' ';
        }
    }
    else{
        for(int i=1;i<n/2;i++){
            cout<<2<<' ';
        }
        cout<<3;
    }
}
