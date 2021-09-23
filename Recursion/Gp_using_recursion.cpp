#include<bits/stdc++.h>
using namespace std;

double gp(int n)
{
    if(n==0)
    {
        return 1;
    }
    double ans = gp(n-1);
    ans = ans + (1/(pow(2,n)));
    return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<gp(n);
return 0;
}