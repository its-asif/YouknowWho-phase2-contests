/*
Basic Math And Again Number Theory(R) | YouKn0wWho Academy
    CodeForces - 1604C 
    My Problem ^o^  
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        int n; cin>> n;
        vector< int > v(n+1); 
        for( int i = 1; i <= n; i++){
            cin >> v[i] ;
        } 
        bool not_div = true ;
        for( int i = 1; i <= n; i++){
            bool temp = false;
            for(int j = i+1; j >= i-21; j--){
                if(j==1) break;
                if( v[i] % j != 0){
                    temp = true;
                    break;
                }
            }
            if(!temp){
                not_div = false;
                break;
            }
        }
        if(not_div) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
    }
    return 0;
}