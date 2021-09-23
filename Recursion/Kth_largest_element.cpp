#include<bits/stdc++.h>
using namespace std;


 int partition(vector<int>&nums,int l,int r)
    {
        int pivot=nums[r];
        int pindex=l-1;
        for(int i=l;i<r;i++)
        {
            if(nums[i]<pivot)
            {
                pindex++;
                int temp = nums[i];
                nums[i]=nums[pindex];
                nums[pindex] = temp;
            }
            
        }
        pindex++;
        int temp=nums[pindex];
        nums[pindex]=nums[r];
        nums[r]=temp;
        cout<<pindex<<endl;
        return pindex;
    }
   void quick_sort(vector<int>&nums,int l,int r,int k)
    {
        if(l<r){
        int pindex=partition(nums,l,r);
        
        // if(pindex==k)
        // {
            
        //     return ;
        // }
    //   else  if(pindex<k)
    //     {
            quick_sort(nums,pindex+1,r,k);
        // }
        // else{
            quick_sort(nums,l,pindex-1,k);
        // }
        }
        return ;
    }
    
    // int findKthLargest(vector<int>& nums, int k) {
    
    //     int index=nums.size()-k;
    //     quick_sort(nums,0,nums.size()-1,index);
    //     return nums[index];
    // }

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
  }
  int k;
  cin>>k;
//   int ans=findKthLargest(v, k);
quick_sort(v,0,n-1,n-k);
//  cout<<ans<<" ";
 cout<<endl;

 for(int i=0;i<n;i++)
 {
     cout<<v[i]<<" ";
 }

return 0;
}
/*
6
3 2 1 5 6 4
2
*/