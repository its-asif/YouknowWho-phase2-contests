/*
Basic Number Theory (G) | YouKn0wWho Academy
    SPOJ - TDPRIMES
    Optimized Sieve
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; while(t--)

const int N = 1e8+69;
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
    nums[0] = nums[1] = true;
    sieve();
  for(int i=0; i<= primes.size(); i+= 100)
      cout<<primes[i]<<endl;
        
}
