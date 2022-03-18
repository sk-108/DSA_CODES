#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res = 0;
    for(int i=1;i<=n+1;i++)
    {
        res = res^i;
    }
    for(int i=0;i<n;i++)
    {
        res = res^arr[i];
    }
    cout<<res<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}

