#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int res = 0;
    for(int i=5;i<=n;i*=5)
    {
        res += n/i;
    }
    cout<<res<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}

