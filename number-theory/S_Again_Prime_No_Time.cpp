/*
Basic Number Theory (S) | YouKn0wWho Academy
    UVA - 10780 
    Again Prime? No Time.     
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

const int N = 1e4+69;
bool nums[N];
vector <int > primes;
void sieve(){
    nums[0]=nums[1]=true;
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
        int m,n,ans=INT_MAX;cin>>m>>n;
        for(int i:primes){
            if(m<i) break;
            if(m%i==0){
                int cntM=0;
                while(m%i==0){
                    cntM++;
                    m/=i;
                }
                int cntFact=0;
                for(int j=2;j<=n;j++){
                    int x = j;
                    while(x%i==0){
                        cntFact++;
                        x/=i;
                    }
                }
                ans = min(ans, cntFact/cntM);
            }
        }
        
        cout<<"Case "<<tt<<":"<<endl;
        if(ans==0) cout<<"Impossible to divide"<<endl;
        else
            cout<<ans<<endl;
    }
}
