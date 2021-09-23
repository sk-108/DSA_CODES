#include<bits/stdc++.h>
using namespace std;

bool isorted(int a[],int n)
{
    if(n==0|| n==1)
    {
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    int smalloutput=isorted(a+1,n-1);
    return smalloutput;
}

bool isorted2(int a[],int n)
{
    if(n==0|| n==1)
    {
        return true;
    }
    bool smalloutput=isorted(a+1,n-1);
    if(!smalloutput)
    {
        return false;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    else{
        return true;
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
  if(isorted2(a,n))
  {
      cout<<"array is sorted "<<endl;
  }
  else{
      cout<<"array is not sorted "<<endl;
  }
return 0;
}