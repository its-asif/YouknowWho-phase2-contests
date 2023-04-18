#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define testcase ll t; cin>>t; while(t--)

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        int n,digitSum=0; cin>>n;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            while(x){
                digitSum += x%10;
                x /= 10;
            }
        }
        
        if(digitSum % 3 == 0)
            cout<< "Yes" << endl;
        else cout<< "No" <<endl;
    }
    return 0;
}