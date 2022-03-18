#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int xr = 0,res1 =0,res2 = 0;
    for(int i=0;i<n;i++)
    {
        xr =  xr^arr[i];
    }
    cout<<xr<<endl;
    int sn = (xr&(~(xr-1)));//rightmost set bit 
    cout<<sn<<endl;
    for(int i=0;i<arr.size();i++)
    {
        if((arr[i]&sn) !=0)
        {
            res1 = res1 ^ arr[i];
        }
        else{
            res2 = res2 ^ arr[i];
        }
    }
    cout<<res1<<"  "<<res2<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
}
/*
10
3 4 3 4 8 4 4 32 7 7 
*/