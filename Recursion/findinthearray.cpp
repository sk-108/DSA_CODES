#include<bits/stdc++.h>
using namespace std;

bool find(int a[],int n,int k)
{
    if(n==0)
    {
        return false;
    }
    if(a[0]==k)
    {
        return true;
    }

    int  ans=find(a+1,n-1,k);
    return ans;
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
 if(find(a,n,k))
 {
     cout<<"present "<<endl;
 }
 else{
     cout<<"not present "<<endl;
 }
return 0;
}