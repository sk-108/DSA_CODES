#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int s,int si=0)
{
    for(int i=si;i<s;i++)
    {
        cout<<a[i];
    }
}

int main(){

int a[5]={1,2,3,4,5};
sum(a,5,2);

return 0;
}