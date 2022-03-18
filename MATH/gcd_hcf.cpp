#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int ans = min(a,b);
    for(int i=ans;i>=1;i--)
    {
        if(a%i ==  0 && b%i==0)
        {
            cout<<i<<endl;
            break;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
