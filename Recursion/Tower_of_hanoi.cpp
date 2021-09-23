#include<bits/stdc++.h>
using namespace std;

void tower(int n,char a,char b,char d)
{
    if(n==0)
    {
        return ;
    }
    else{
        tower(n-1,a,d,b);
        cout<<"move "<<a<<" to "<<d<<endl;

        tower(n-1,b,a,d);
    }
}

int main(){
  int n;
  cin>>n;
  char a='a',b='b',d='d';
  tower(n,a,b,d);
return 0;
}