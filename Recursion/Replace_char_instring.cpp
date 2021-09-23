#include<bits/stdc++.h>
using namespace std;

void replace(char c[],char c1,char c2)
{
    if(c[0]=='\0')
        return ;
    else{
        if(c[0]==c1)
        {
            c[0]=c2;
            replace(c+1,c1,c2);
        }
        else{
            replace(c+1,c1,c2);
        }
    }
}


int main(){
  char c[100];
  cin>>c;
  char c1,c2;
  cin>>c1>>c2;
  replace(c,c1,c2);
  cout<<c;
return 0;
}