/*
Basic Number Theory (V) | YouKn0wWho Academy
    UVA - 10699 
    Count the factors 
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; while(t--)

const int N = 1e6+69;
int nums[N];
vector <int > primes;
void sieve(){
    for( int i=2; i<= N; i++){
        if(nums[i]) continue;
        for(int j = i; j <= N; j+= i){
            nums[j]++;
        }
    }
    
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
    int x;
    while(cin>>x){
        if(x==0) break;
        cout<<x<<" : "<<nums[x]<<endl;
    }
        
}
