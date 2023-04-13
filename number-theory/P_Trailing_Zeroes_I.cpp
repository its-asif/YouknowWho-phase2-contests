/*
Basic Number Theory (P) | YouKn0wWho Academy
    LightOJ - 1028 
    Trailing Zeroes 
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; while(t--)

const int N = 1e6+69;
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
int tt=0;
sieve();
    testcase{
        ll x,ans=1,cnt; cin>>x;
        for(auto i: primes){
            if(1LL * i*i > x) break;
            cnt=0;
            while(x%i==0){
                x/=i;
                cnt++;
            }
            ans *= (cnt+1); 
        }
        if(x!=1) ans *= 2;

        cout<<"Case "<<++tt<<": "<<ans-1<<endl;
    }
        
}