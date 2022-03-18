#include<bits/stdc++.h>
using namespace std;

long long int mod = 1e9+7;
void solve()
{
    long long int a ,b;
    cin>>a>>b;
    cout<<((a%mod)*(b%mod))%mod<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
