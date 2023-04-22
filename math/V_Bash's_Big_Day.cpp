    /*
    Basic Math And Again Number Theory(V) | YouKn0wWho Academy
        CodeForces - 757B 
        Bash's Big Day  
    */
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define endl '\n'
    #define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
    const int N = 1e5+ 69;
    int pre[N];
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int mx=1;
        testcase{
            int x; cin>> x;
            if(t==1){ cout<< 1 <<endl; return 0;}
            for( int i = 2; i * i <= x; i++){
                if(x % i == 0){
                    pre[i]++;
                    mx = max( mx, pre[i]);
                    while(x % i == 0 )
                        x /= i;
                }
            }
            if(x > 1){
                pre[x]++;
                mx = max( mx , pre[x] );
            }
        }
        cout<< mx;
        return 0;
    }