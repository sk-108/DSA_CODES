#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&v,int l,int r)
{
    int pivot = v[r];
    int pindex = l-1;
    while(l<r)
    {
        if(v[l]<pivot)
        {
            pindex++;
            int temp = v[l];
            v[l] = v[pindex];
            v[pindex] = temp;
        }
        l++;
    }
    pindex++;
    int temp = v[r];
         v[r] = v[pindex] ;
         v[pindex] = temp;
         return pindex;
}

void quick_sort(vector<int>&v,int l,int r )
{
    if(l>=r)
    {
        return ;
    }
    else{
    int pindex = partition(v,l,r);
    quick_sort(v,l,pindex - 1);
    quick_sort(v,pindex+1,r);

}

}

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
  }
  quick_sort(v,0,n-1);
  for(int i=0;i<n;i++)
  {
      cout<<v[i]<<" ";
  }

return 0;
}