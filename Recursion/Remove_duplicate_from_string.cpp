#include<iostream>
using namespace std;

void remove_dp(char c[])
{
    // cout<<c<<endl;
    if(c[0]=='\0')
    {
        return ;
    }
    else{
        // cout<<c<<endl;
        char a = c[0];
        if(c[1]==a)
        {
            int i=1;
            for(;c[i]!='\0';i++)
            {
                c[i-1]=c[i];
            }
            c[i-1]=c[i];
            remove_dp(c);

        }
        else{
            remove_dp(c+1);
        }
    }
}

int main(){
  char c[100];
  cin>>c;
  remove_dp(c);
  cout<<c;
return 0;
}