/*
Basic Number Theory (O) | YouKn0wWho Academy
    CodeChef - CTHREE 
    Chef and Tuples   
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
        int n,a,b,c; cin>>n>>a>>b>>c;
        vector<int> divs;
        for(int i=1; i*i <= n; i++){
            if(n%i==0){
                divs.push_back(i);
                if(i!= n/i)
                    divs.push_back(n/i);
            }
        }   
        sort(divs.begin(), divs.end());

        int cnt=0;
        for(auto i: divs){
            if(i>a) break;
            for(auto j: divs){
                if(j>b) break;
                if( n % (1LL * i * j)==0 ){
                    if(n / (i*j) <= c)
                        cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }   
}


