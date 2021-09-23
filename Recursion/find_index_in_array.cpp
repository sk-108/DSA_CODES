#include<bits/stdc++.h>
using namespace std;

int find(int a[],int n,int x)
{
    if(n==-1)
    {
        return -1;
    }
    if(a[0]==x)
    {
        return 0;
    }
    int smalloutput= find(a+1,n-1,x);
    if(smalloutput==-1)
    {
        return -1;
    }
    else{
        return smalloutput+1;
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
  int key;
  cout<<"Key";
  cin>>key;
  cout<<find(a,n,key);
return 0;
}