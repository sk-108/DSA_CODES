#include<bits/stdc++.h>
using namespace std;

void fun(int a[]) {
    cout << a[0] << " ";
}

int main() {
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
}
// void print(int a[],int n)//we have send the size because it send it by pointer
// void print(int *a ,int n)
// {
//     cout<<sizeof(a)<<endl;
//     for(int i=0;i<n-2;i++)
//     cout<<*(a+i)<<endl;
// }                  

// int main(){

// int a[10]={0};
// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//     a[i]=i;
// }
// print(a+2,n);  //Passing a part of array
// cout<<sizeof(a);
