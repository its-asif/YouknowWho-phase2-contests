/*
Basic Math And Again Number Theory(Y) | YouKn0wWho Academy
    LightOJ - 1138 
    Trailing Zeroes (III)  
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int legend(int n){
    int ans =0;
    while(n){
        ans += n / 5;
        n /= 5;
    }
    return ans ;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        int n; cin >> n;
        int l = 1, r = 5 * n, ans = -1;
        while(l<=r){
            int mid = (r + l) / 2;
            int zeros = legend(mid);
            if(zeros == n){
                ans = mid;
                r = mid -1;
            }
            else if( zeros < n)
                l = mid + 1;
            else 
                r = mid - 1;
        }
        cout<<"Case "<<tt<<": ";
        if(ans == -1)
            cout<< "impossible" <<endl;
        else cout << ans << endl;
    }
    return 0;
}