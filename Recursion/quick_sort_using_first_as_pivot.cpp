#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r)
{
    int pivot = a[l];
    int count=0;
    for(int i=l+1;i<=r;i++)
    {
        if(a[i]<=pivot)
        {
            count++;
        }
    }
    int pos = l+count;
    // cout<<pos<<endl;
    swap(a[l],a[pos]);
    int i=l,j=r;
    while(i<=pos && j>=pos)
    {
        if(a[i]<=a[pos])
        {
            i++;
        }
        else if(a[j]>=a[pos])
        {
            j--;
        }
        else{
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return pos;
}

void quick_sort(int a[],int l,int r)
{
    if(l>=r)
    {
        return ;
    }
    else{
        int pindex = partition(a,l,r);
        quick_sort(a,l,pindex-1);
        quick_sort(a,pindex+1,r);
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
  quick_sort(a,0,n-1);
  for(int i=0;i<n;i++)
  {
      cout<<a[i];
  }
return 0;
}