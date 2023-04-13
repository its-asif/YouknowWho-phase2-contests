/*
Basic Number Theory (L) | YouKn0wWho Academy
    SPOJ - VECTAR8 
    Primal Fear  
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; while(t--)

const int N = 5e6+69;
bool nums[N];
int ans[N];
void sieve(){
    nums[0]= nums[1]= true;
    for( int i=2; i*i<= N; i++){
        if(nums[i]) continue;
        for(int j = i*i; j <= N; j+= i)
            nums[j] = true;
    }                                      // marked all primes & non primes


    for(int i=2;i<=N; i++){
        ans[i] = ans[i-1];                  // prefix sum
      if(!nums[i]) {                        // if prime
        int tmp = i,val=0,zero=0,pcnt=0,cnt=0;
        while(tmp){
            cnt++;                          // cnt => counting the number of digits
            if(tmp%10==0 ) zero++;          // counting zeros
            val = tmp%10*pow(10,cnt-1) + val; // storing suffix
            if(!nums[val]) pcnt++;            // counting if each suffix is prime
            tmp/=10;                            // digit eleminating from back
            if(zero) break;
        }
        if(zero==0 && cnt==pcnt) ans[i]++;      // increasing prefix sum if fill condition
      }
      }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
sieve();
    testcase{
      int x; cin>>x;
        cout<<ans[x]<<endl;
    } 
}