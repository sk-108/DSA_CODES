#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int count =  0;
    while(n!=0)
    {
        count++;
        n = n/10;
    }
    return count;
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
