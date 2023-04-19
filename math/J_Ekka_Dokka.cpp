/*
Basic Math And Again Number Theory(J) | YouKn0wWho Academy
    LightOJ - 1116 
    Ekka Dokka  
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
        ll n; cin>> n;
        cout<<"Case "<<tt<<": ";
        if(n%2) cout<<"Impossible"<<endl;
        else {
            ll m=1,temp=n;
            while(temp%2==0){
                temp /= 2;
                m *= 2;
            }
            cout<< n/m <<' '<<m<<endl;
        }
    }
    return 0;
}