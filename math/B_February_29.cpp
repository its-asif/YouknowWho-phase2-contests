/*
Basic Math And Again Number Theory(B) | YouKn0wWho Academy
    LightOJ - 1414
    February 29   
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
int leap(ll a,ll b,ll div){
    return (b/div)- ((a-1)/div);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        string m1,m2; ll d1,d2,y1,y2; char c;
        cin>> m1 >> d1 >> c>> y1 >>  m2 >> d2 >> c>> y2;
                                     
            if(m1!="January" &&  m1[0] != 'F') y1++;       // condition for starting year
            if(m2=="January" || (m2[0]=='F' && d2!=29)) y2--; // condition for ending year
        
        ll ans = leap(y1,y2,4) - leap(y1,y2,100) + leap(y1,y2,400) ;
        cout<<"Case "<<tt<<": "<<ans<<endl;
    }
    return 0;
}