#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int temp = 0,t = n;
    while(t!=0)    
    {
        temp = temp*10 + t%10;
        t =  t/10;
    }
    if(temp == n)cout<<"panlindrome no "<<endl;
    else cout<<"not a palindrome no "<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
