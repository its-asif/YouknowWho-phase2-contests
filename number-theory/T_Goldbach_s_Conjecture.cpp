/*
Basic Number Theory (R) | YouKn0wWho Academy
    LightOJ - 1259 
    Goldbach's Conjecture  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; for(int tt=1;tt<=t;tt++)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

const int N = 1e7+69;
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

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
    testcase{
        int n,cnt=0; cin>>n;
        for(auto i:primes){
            if(i*2>n) break;
            if(!nums[n-i]) cnt++;
        }
        cout<<"Case "<<tt<<": "<<cnt<<endl;
    }
}
