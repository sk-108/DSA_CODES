#include<bits/stdc++.h>
using namespace std;

int find(int a[],int n,int x)
{
    if(n==0)
    {
        return -1;
    }
    int ans=find(a+1,n-1,x);
    if(ans==-1)
    {
        if(a[0]==x)
        {
            ans=0;
            return ans;
        }
        else
            return -1;
    }
    else{
        ans++;
        return ans;
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
  cout<<"key ";
  cin>>key;
  cout<<find(a,n,key);
return 0;
}