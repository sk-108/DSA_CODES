#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int power = pow(2,s.size())   ;
    cout<<power<<endl;
    for(int i=0;i<power;i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if((i&(1<<j))!=0)
            {
                // cout<<"hare krishna>>"<<endl;
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
