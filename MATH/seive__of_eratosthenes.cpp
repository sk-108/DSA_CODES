#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n<=1)return false;
    else{
        if(n==2 || n==3)return true;
        else if(n%2==0 || n%3==0)return false;
        for(int i=5;i*i<=n;i+=6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                return false;
            }
        }
        return true;
    }
}

void prime_till_n(int n)
{
    vector<bool>isprime(n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(isprime[i])
        {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i)
            {
                isprime[j] = false;
            }
        }
    }
}

void solve()
{
    int  n;
    cin>>n;
    prime_till_n(n);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}

