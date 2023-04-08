/*
Basic Number Theory (H) | YouKn0wWho Academy
    CodeForces - 230B 
    T-primes 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; while(t--)

bool isSquare(ll x){
    if(sqrt(x)== (int)sqrt(x)) return true;
    else return false;
}

bool isPrime(ll x){
    for(ll i=2; i*i <= x; i++)
        if(x%i==0) return false;

    return true;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    testcase{
        ll n ; cin>>n;
        if(isSquare(n) && isPrime(sqrt(n)) && n!=1) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
}