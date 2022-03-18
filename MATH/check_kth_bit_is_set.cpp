#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    // if(n&1<<(k-1))cout<<"Yes";
    // else cout<<"No"<<endl;
    if(n>>(k-1) & 1)cout<<"Yes";
    else cout<<"No"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
