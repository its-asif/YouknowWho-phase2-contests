/*
Basic Math And Again Number Theory(X) | YouKn0wWho Academy
    LightOJ - 1045 
    Digits of Factorial 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
const int N = 1e6+69;
double pre[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i <= N; i++)
        pre[i] = pre[i-1] + log2(i);
    testcase{
        int n, b; cin>> n >> b;
        double ans = 1 ;
        ans += pre[n] / log2(b) ;
        cout<<"Case "<<tt<<": "<< (ll)floor(ans) <<endl;
    }
    return 0;
}