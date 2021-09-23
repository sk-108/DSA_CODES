#include<bits/stdc++.h>
using namespace std;

int digits(int n)
{
    if(n==0)
    {
        return 0;
    }
    int smalloutput=digits(n/10);
    return 1+smalloutput;
}

int main(){
  int n;
  cin>>n;
  cout<<digits(n);
return 0;
}