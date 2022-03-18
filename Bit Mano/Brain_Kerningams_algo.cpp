#include<bits/stdc++.h>
using namespace std;
//check for power of 2  
bool solve()
{
    int n;
    cin>>n;
    return  (n!=0)&&((n&(n-1))==0);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    cout<<solve();
}
