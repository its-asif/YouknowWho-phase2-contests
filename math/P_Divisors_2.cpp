/*
Basic Math And Again Number Theory(P) | YouKn0wWho Academy
    SPOJ - DIV2 
    Divisors 2  
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
const int N = 1e6;
int d[N+69];
bool OK[N+69];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 1; i <= N; i++){
        for(int j = i; j <= N; j += i){
            d[j]++;                         // N*log(N)
        }
    }
    for(int i = 1; i <= N; i++){
        for(int j = i; j <= N; j += i){
            if(d[j] % d[i]!=0) OK[j] = true;
        }
    }
    vector< int > ans;
    for(int i = 1; i <= N; i++)
        if(!OK[i] && d[i]>3) ans.push_back(i);
    
    for(int i = 107; i<= ans.size(); i+= 108)
        cout<< ans[i] << endl;
        
    return 0;
}