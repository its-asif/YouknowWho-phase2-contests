/*
Basic Number Theory (R) | YouKn0wWho Academy
    LightOJ - 1035 
    Intelligent Factorial Factorization 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; for(int tt=1;tt<=t;tt++)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    testcase{
        int n; cin>>n;
        map<int,int> mp;
        for (int j = 2; j <= n; j++)
        {
            int m= j;
            for(int i=2;i*i<=m;i++){
                while(m%i==0){
                    mp[i]++;
                    m/=i;
                }
            }
            if(m>1) mp[m]++;
        }
        
        
        cout<<"Case "<<tt<<": "<<n<<" =";
        int c=0;
        for(auto i:mp){
            if(c>0) cout<<'*';
            cout<<' '<<i.first<<" ("<<i.second<<") ";
            c++;
        }
        cout<<endl;
    }
}
