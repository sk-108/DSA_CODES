#include<bits/stdc++.h>
using namespace std;

void f(const int *k)
{
    // *k = *k +1;
}
void g(const int& p)
{
    // p++;
}
int main(){

//     int i=10;
//  const   int& j=i;
//     // j++;
//     i++;
//     cout<<i<<" "<<j<<endl;
    // const int i = 10;
    // const int &k = i;
    // cout<<k<<" "<<i<<endl;

    // const int j = 20;
    // int &p = j;
    // cout<<p<<" "<<j<<endl;
//  const   int n = 10;
//  const   int *p=&n;
    // int i = 20;
    // const int *p = &i;
    // i++;
    // cout<<*p<<endl;
    // // cout<<n<<endl;
    //use of const comes in function calls
    // int j = 10;
    // int *p = &j;
    // f(p);
    // g(j);
    // cout<<j<<endl;
    int i = 10;
    int j = 20;
    // int const *p = &i;
    // p = &j; //allowed
    // cout<<*p<<endl;
    // to make ptr as constant
    // int  * const p = &i;
    // const int * const p = &i;
    // p++;
    // p = &j;
    // cout<<*p<<endl;
    // p = &j; //error
return 0;
}