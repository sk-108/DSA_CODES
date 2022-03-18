#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    if(n<2)
        return false;
    else {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)return false;
        }
        return true;
    }
}

void solve()
{
    int n;
    cin>>n;
    if(check_prime(n))
    {
        cout<<"prime no"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
