#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,n;
    cin>>x>>n;
    int ans = 1;
    while(n!=0)
    {
        if(n%2!=0)
        {
            ans *= x;
        }
        x = x*x;
        n = n/2;
        // cout<<ans<<" "<<x<<" "<<n<<endl;
    }
    x = x/x;
    ans *=x;
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
