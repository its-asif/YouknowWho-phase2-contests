/*
Basic Number Theory (U) | YouKn0wWho Academy
    SPOJ - DIVSUM
    Divisor Summation   
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase ll t; cin>>t; while(t--)

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    testcase{
        ll n,sum=1; cin>>n;
        if(n==1) cout<<0<<endl;
        else{
            for (int i = 2; i*i <= n; ++i)
            {
                if(n%i==0){
                    sum +=i;
                    if(n/i!=i){
                        sum += (n/i);
                    }
                }
            }
            cout<<sum<<endl;
    }
    }
        
}


