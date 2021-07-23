#include<bits/stdc++.h>
using namespace std;


int main(){


int a[3]={10,2,3};     
// int *p=a;
// cout<<a<<endl;
// cout<<&a[0]<<endl;  //a==&a[0]
// cout<<*a<<endl;
// cout<<*(a+1)<<endl;
// cout<<*(1+a)<<endl;
// cout<<1[a]<<endl;
cout<<&a<<endl;     //first difference between array and pointer is no sperate memory for array 
cout<<sizeof(a)<<endl;
int *ptr=a;
cout<<sizeof(ptr)<<endl;
int arr[]={1,2,3,4};
int *p=arr+1;
cout<<*p<<endl;
return 0;
}