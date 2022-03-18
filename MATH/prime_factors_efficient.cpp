#include<bits/stdc++.h>
using namespace std;

void  primefactors(int n)
{
    if(n<=1)return ;
    while(n%2==0)
    {
        cout<<2<<" ";
        n =  n/2;
    }
    
    while(n%3==0)
    {
        cout<<3<<" ";
        n =  n/3;
    }
    for(int i=5;i*i<=n;i+=6)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n = n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<i+2<<" ";
            n = n/(i+2);
        }
    }
    if(n>3)cout<<n<<endl;
    
}

void solve()
{
    int n;
    cin>>n;
    primefactors(n);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
