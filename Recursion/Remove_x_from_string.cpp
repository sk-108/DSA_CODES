#include<bits/stdc++.h>
using namespace std;

void removeX(char c[])
{
    // cout<<c<<endl;
    if(c[0]=='\0')
        return ;
    else{
        if(c[0]=='x')
        {
            // cout<<c[0]<<" ";
            int i=1;
            for(;c[i]!='\0';i++)
            {
                c[i-1]=c[i];
            }
            c[i-1]=c[i];
            removeX(c);
        }
        else{
            removeX(c+1);
        }
    }
}

int main(){
  char c[100];
  cin>>c;
  removeX(c);
  cout<<c;
return 0;
}