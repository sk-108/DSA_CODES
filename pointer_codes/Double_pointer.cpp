#include<bits/stdc++.h>
using namespace std;

void inc1(int **p)
{
    p=p+1;
}

void inc2(int **p)
{
    *p=*p+1;
}
void inc3(int **p)
{
    **p=**p+2;
}
int main(){

int i=07;
int *p=&i;
int **q=&p;
// cout<<q<<endl;
// cout<<&p<<endl;
// cout<<p<<endl;
// cout<<*q<<endl;
// cout<<i<<endl;
// cout<<*p<<endl;
// cout<<**q<<endl;
// cout<<q<<endl;
// inc1(q);
// cout<<q<<endl;
// cout<<*q<<endl;
// inc2(q);
// cout<<*q<<endl;  changes are reflected
cout<<**q<<endl;
inc3(q);
cout<<**q<<endl;
return 0;
}