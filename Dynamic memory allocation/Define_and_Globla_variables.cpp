#include<bits/stdc++.h>
using namespace std;

#define PI 3.14
int a ;
// void g(int& p)
// {

//     p++;

// }
// void f(int& k)
// {
//     k++;
//     g(k);
// }

void g()
{
   a++;
   cout<<a<<endl;
}
void f()
{
     a++;
    cout<<a<<endl;
    g();
}
int main(){

// int r;
// cin>>r;
// cout<<PI*r*r<<endl;
// cout<<3.14*r*r<<endl;//dificult to change in whole code
// double p = 3.14;
// cout<<p*r*r<<endl;//memory usage

// int n=10;
// int& t=n;
// cout<<n<<" "<<t<<endl;
// cout<<&n<<" "<<&t<<endl;// it's like different name of same thing
// f(n); // first method 
// cout<<n<<endl;
//second method is global variables which is not advised to use
a = 10;
f();
return 0;
}