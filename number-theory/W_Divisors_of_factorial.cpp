/*
Basic Number Theory (W) | YouKn0wWho Academy
    SPOJ - DIVFACT
    Divisors of factorial  
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
    testcase{
        int n; cin>>n;
        ll ans=1,cnt;
        for(auto p:primes){
            if(p>n) break;
            cnt=0;
            for(int i=p;i<=n;i+=p){
                int x = i;
                while(x%p==0){
                    cnt++;
                    x/=p;
                }
            }
            // cout<<p<<' '<<cnt << ' ';
            ans *= cnt+1;
            ans %= 1000000007;
        }
        cout<<ans<<endl;
    }
    return 0;
}