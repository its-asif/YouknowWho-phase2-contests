/*
Basic Number Theory (U) | YouKn0wWho Academy
    UVA - 10394 
    Twin Primes  
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
      if(!nums[i] && !nums[i+2]) primes.push_back(i);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
int x;
sieve();
    while(cin>>x){
        cout<<"("<<primes[x-1]<<", "<<primes[x-1]+2<<")"<<endl;
    }
        
}