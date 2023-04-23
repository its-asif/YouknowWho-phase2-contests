/*
Basic Math And Again Number Theory(G) | YouKn0wWho Academy
    CodeForces - 1216D 
    Swords  
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, gc = 0, mx = 0; cin>> n;
    vector< int > v(n);
    for( int i = 0; i< n; i++){
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    ll sum = 0;
    for( int i = 0; i< n; i++){
        v[i] = mx - v[i];
        gc = __gcd(gc, v[i]);
        sum += v[i];
    }
    cout<< sum / gc << ' ' << gc ;
    return 0;
}

