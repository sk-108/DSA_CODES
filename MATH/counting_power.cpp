#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,n;
    cin>>x>>n;
    int ans = 1;
    for(int i=0;i<n;i++)    
    {
        ans *=x;
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
