/*
Basic Math And Again Number Theory(U) | YouKn0wWho Academy
    SPOJ - DIVFACT 
    Divisors of factorial  
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
const ll mod = 1e9+7;
const int N = 1e4+9;
bool nums[N];
vector <int > primes;
void sieve(){
    for( int i = 2; i * i <= N; i++){
        if( nums[i] ) continue;
        for(int j = i * i; j <= N; j += i)
            nums[j] = true;
    }
    for(int i = 2; i <= N; i++)
    if(!nums[i]) primes.push_back(i);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    testcase{
        int n; cin>> n;
        ll ans = 1;
        for(auto p : primes){
            if(p > n) break;
            ll cnt = 0, x = n;
            while(x){
                cnt += x/p;
                x /= p;
            }
            ans *= (cnt+1) % mod;
            ans %= mod;
        }
        cout<< ans << endl;
    }
    return 0;
}