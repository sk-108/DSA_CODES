#include<bits/stdc++.h>
using namespace std;

// int sum2(int a[],int n)
// {
//     if(n==1)
//     {
//         return 
//     }
// }

int sum(int a[],int n)
{
    if( n==1)
    {
        return a[0];
    }
    int smallouput=sum(a+1,n-1);
    return a[0]+smallouput;
}



int main(){
  int n;
  cin>>n;
  int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<sum(a,n);
return 0;
}