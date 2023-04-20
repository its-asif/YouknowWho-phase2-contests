/*
Basic Math And Again Number Theory(O) | YouKn0wWho Academy
    SPOJ - AMR10C 
    Square Free Factorization 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        int n,ans=1; cin>>n;
        for(int i = 2; i * i <= n; i++){
            if(n%i==0){
                int cnt=0;
                while(n%i==0){
                    n /= i;
                    cnt++;
                }
                ans = max(ans,cnt);
            }
        }
        cout<< ans <<endl;
    }
    return 0;
}