#include<bits/stdc++.h>
#include<cstring>
using namespace std;

void shift(string s)
{
    cout<<s<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=s.size();j>0;j--)
        {
                s[j-1]=s[j];
                cout<<s[j];
        }
    }
    cout<<s<<endl;
}

void replace(string s )
{
    if(s.size()==0)
    {
        return ;
    }
    else{
        replace(s.substr(1));
        if(s[0]=='p')
        {
            if(s[1]=='i')
            {
                shift(s.substr(2));
            }
        }

    }
}

int main(){
  string s;
  cin>>s;
//   replace(s);
shift(s);
return 0;
}