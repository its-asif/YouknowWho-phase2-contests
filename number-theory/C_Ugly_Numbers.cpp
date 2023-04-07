/*
Basic Number Theory (C) | YouKn0wWho Academy
    UVA - 136
    Ugly Numbers 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  set<ll> st;
  st.insert(1);
  for(int i=1; i<1500; i++){
    ll x = *st.begin();
    st.insert(x*2);
    st.insert(x*3);
    st.insert(x*5);
    st.erase(st.begin());
  }

  cout<< "The 1500'th ugly number is "<< *st.begin() <<"."<<endl;
}