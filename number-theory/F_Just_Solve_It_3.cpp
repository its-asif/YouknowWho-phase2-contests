/*
Basic Number Theory (F) | YouKn0wWho Academy
    Gym - 310911G
    Codeforces Gym
*/
/*
    * Tips : - Use '\n' or you will get time limit error; 
             - Use " ios_base::sync_with_stdio(0); cin.tie(0); " to avoid time limit error
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N = 1e6;
int arr[N+1];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    ll n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x; cin>> x;
        arr[x]++;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = i+i; j <=  N; j+=i)
        {
            arr[i]+= arr[j];
        }
        cout<<arr[i]<<endl;
    }
    return 0;
}