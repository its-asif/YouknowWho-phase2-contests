/*
Basic Math And Again Number Theory(Z) | YouKn0wWho Academy
    UVA - 12220 
    Divisible Subsequences  
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
        ll d,n; cin>> d >> n;
        ll preSum[n+1];
        map<int , int> mp;
        preSum[0] = 0 ;
        for(int i = 0; i < n; i++){
            int x; cin>> x;
            preSum[i+1] = (preSum[i] + x) % d;
            mp[preSum[i+1]]++;
        }
        mp[0]++;
        ll ans = 0;
        for(auto i : mp)
            ans += ( (ll)(i.second-1) * i.second ) / 2 ;

        cout<< ans << endl;
    }
    return 0;
}













// Pr % d = Pl-1 % d