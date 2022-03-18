#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b)
{
    int mx = max(a,b);
    for(int i=mx;i<=(a*b);i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
    return -1;
}

void solve()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}

