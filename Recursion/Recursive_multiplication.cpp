#include<bits/stdc++.h>
using namespace std;

int mul(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    int s = mul(a,b-1);
    return a+s;
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<mul(a,b);
return 0;
}