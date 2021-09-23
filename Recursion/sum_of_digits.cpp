#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int ans = sum(n/10);
    ans+=n%10;
    return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<sum(n);
return 0;
}