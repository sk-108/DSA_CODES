#include<bits/stdc++.h>
using namespace std;

int count(int a[],int n,int x,vector<int>&out)
{
    if(n==0)
    {
        return 0;
    }
    count(a+1,n-1,x,out);
    for(int i=0;i<out.size();i++)
    {
        out[i]++;
    }
    if(a[0]==x)
    {
        out.insert(out.begin(),0);
    }
}

int main(){
  int n;
  cin>>n;
  int a[n];
  vector<int>out;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int x;
  cout<<"enter the value to search ";
  cin>>x;
    count(a,n,x,out);
    for(int i=0;i<out.size();i++)
    {
        cout<<out[i]<<" ";
    }

return 0;
}