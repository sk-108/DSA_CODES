#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    if(n == 0)return 0;
    return 1 + countDigits(n/10);
}

void solve()
{
    int n;
    cin>>n;
    cout<<countDigits(n);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
