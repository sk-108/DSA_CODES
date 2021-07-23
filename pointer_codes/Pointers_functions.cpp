#include<bits/stdc++.h>
using namespace std;

void print(int *x)
{
    cout<<x<<endl;
}
void increment_pointer(int *x)
{
    cout<<x<<endl;
    x=x+1;
    cout<<x<<endl;
}
void increment(int *x)
{
    (*x)++; //use chit analogy here it is not changing the pointer but changing
    //where the pointer is pointing 
}
int main(){

int i=10;
int *p=&i;
print(p);
increment_pointer(p);
print(p);
cout<<p<<endl;
cout<<*p<<endl;
increment(p);
cout<<*p<<endl;


return 0;
}