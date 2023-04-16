/*
Basic Number Theory (Z) | YouKn0wWho Academy
    Gym - 310911K  
    A Missing Factor 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

const int N = 1e5+69;
bool nums[N];
vector <int > primes;
void sieve(){
    for( int i=2; i*i<= N; i++){
        if(nums[i]) continue;
        for(int j = i*i; j <= N; j+= i)
            nums[j] = true;
    }
    for(int i=2;i<=N; i++)
    if(!nums[i]) primes.push_back(i);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    ll n,temp; cin>>n;
    n = sqrtl(n);
    for(auto p:primes){
        if(p>n) break;
        if(n%p==0) temp=p;
        while(n%p==0) n/=p;
    }
    if(n>1 && n>temp) temp = n;
    cout<<temp; 
    return 0;
}