/*
Basic Number Theory (E) | YouKn0wWho Academy
    Gym - 310911E
    Just Solve It! (1)  
*/
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define pb push_back
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))
using namespace std;
int main()
{
    fast
    ll t; cin>>t;
    while(t--){
        int n; cin >> n;
        vector<ll> v;
        map<ll, ll> m;
          for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                m[i]==0;
                v.pb(i);
              while (n % i == 0) {
                m[i]++;
                n /= i;
              }
            }
          }
          if (n > 1){ m[n]=1; v.pb(n);}

          ll sumPF = 0;
          ll nDiv =1;
          ll divSum =1;
          for(auto x: m) {
            sumPF+= x.second;
            nDiv *= (x.second+1);
            divSum *= (pow(x.first,x.second+1)-1)/(x.first-1);
        }

        
        cout<< v[0]<<' '<<v[v.size()-1]<<' '<<m.size()<<' '<<sumPF<<' '<<nDiv<<' '<<divSum <<endl;
    }
    return 0;
}