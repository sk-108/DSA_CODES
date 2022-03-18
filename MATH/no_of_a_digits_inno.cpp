#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    double logval  = 0;

    for(int i=1;i<=n;i++)
    {
        logval +=log10(i);
    }
    cout<<floor(logval)+1<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
