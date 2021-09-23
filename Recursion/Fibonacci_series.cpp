#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0)
    {
        return n;
    }
    if(n==1)
    {
        return n;
    }
    int smalloutput1 = fib(n-1);
    int smalloutput2 = fib(n-2);
    return smalloutput1+smalloutput2;
}

int main(){
  int n;
  cin>>n;
cout<< fib(n);
return 0;
}