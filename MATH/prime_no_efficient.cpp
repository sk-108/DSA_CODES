#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n==1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0 || n%3==0)return false;
    for(int i=5;i*i<=n;i++)
    {
        if(n%i==0||n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    if(prime(n))
    {
        cout<<"prime no"<<endl;
    }
    else{
        cout<<"not a prime no "<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
