#include<bits/stdc++.h>
using namespace std;
int table[256];
void initialize()
{
    table[0] = 0;
    for(int i=1;i<256;i++)
    {
        table[i] = (i&1) + table[i/2];
    }
}
int count(int n)
{
    int res = table[n&0xff];
    n = n>>8;
    res = res + table[n&0xff];
    n = n>>8;
    res = res + table[n&0xff];
    n = n>>8;
    res = res + table[n&0xff];
    return  res;
}
void solve()
{
    int n;
    cin>>n;
    initialize();
    cout<<count(n)<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}

