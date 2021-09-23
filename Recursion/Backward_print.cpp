#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
    if(n==0)
    {
        return ;
    }
    print(a+1,n-1);
    cout<<a[0]<<" ";
}

int main(){
   int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  print(a,n);
return 0;
}