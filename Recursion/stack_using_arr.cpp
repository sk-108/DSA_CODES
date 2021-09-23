#include<bits/stdc++.h>
using namespace std;

int stackk(int a[],int t)
{
    int n;
    cout<<"enter no of element ";
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        ++t;
        a[t]=val;
    }
    return t;

}


int main(){
  int n;
  cin>>n;
  int a[n];
  int top = -1;
top =   stackk(a,top);
    while(top!=-1)
    {
        cout<<a[top];
        top--;
    }
    
return 0;
}