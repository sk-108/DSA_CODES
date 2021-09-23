#include<bits/stdc++.h>
using namespace std;

int length(char s[])
{
    if(s[0]=='\0')
        return 0;
    else{
        int smalloutput = length(s+1);
        return smalloutput + 1;
    }
}

int main(){
  char s[100];
  cin>>s;
  int l= length(s);
  cout<<l<<endl;
return 0;
}