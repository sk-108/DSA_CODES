#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else
        return gcd(b,a%b);
}

void solve()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
