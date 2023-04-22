/*
Basic Math And Again Number Theory(W) | YouKn0wWho Academy
    CodeForces - 735D 
    Taxes  
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>> n;
    if(n == 2 ) cout<< 1 << endl;
    else if(n%2==0)
        cout<< 2 << endl;
    else{
        bool is_prime = true;
        for(ll i = 2; i * i <= n; i++){
            if(n%i==0){
                is_prime = false;
                break;
            }
        }

        if(is_prime) cout<< 1 << endl;
        else{
            n -= 2;
            is_prime = true;
            for(ll i = 2; i * i <= n; i++){
                if(n%i==0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime) cout<< 2 << endl;
            else cout<< 3 << endl;
        }
    }   
    return 0;
}