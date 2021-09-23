#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v , int start ,int end )
{
    int mid = ( start + end )/2;
    int ls = mid-start + 1;
    int rs = end - mid;
    vector<int>l(ls);
    vector<int>r(rs);
    for(int i=0;i<ls;i++)
    {
        l[i]=v[start + i];
    }
    for(int i=0;i<rs;i++)
    {
        r[i]=v[mid+1 + i];
    }
    int i=0,j=0,k=start;
    while(i<ls && j<rs )
    {
        if(l[i]>r[j])
        {
            v[k] = r[j];
            j++;
            k++;
        }
        else
        {
            v[k] = l[i];
            i++;
            k++;
        }
       
    }

    while(i<ls)
    {
        v[k] = l[i];
            i++;
            k++;
    }
    while(j<rs)
    {
        v[k] = r[j];
            j++;
            k++;
    }

}


void merge_sort(vector<int>&v , int start ,int end )
{
    if(start>=end)
    {
        return ;
    }
    else{
        int mid = (start + end ) / 2 ;
        merge_sort(v,start,mid);
        merge_sort(v,mid+1,end);
        merge(v,start,end);
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
  merge_sort(v,0,n-1);
   for(int i=0;i<n;i++)
  {
      cout<<v[i];
  }
return 0;
}