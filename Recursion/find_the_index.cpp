#include<bits/stdc++.h>
using namespace std;

int find_the_index(int a[],int n,int k)
{
    if(n==0)
    {
        return -1;
    }
    if(a[0]==k)
    {
        return ;
    }
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int k;
  cin>>k;

  cout<<find_the_index(a,n,k);
return 0;
}