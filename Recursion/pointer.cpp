#include<bits/stdc++.h>
using namespace std;


int main(){
  int a[]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5};
  int *ip=a+4;
  cout<<(ip+1)<<endl;
  cout<<&a[8];
return 0;
}