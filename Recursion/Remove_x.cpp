#include<bits/stdc++.h>
using namespace std;

void remove(string s)
{
    if(s.size()==0)
    {
        return ;
    }
    else{
        if(s[0]=='x')
        {
            remove(s.substr(1));
        }
        else{
            cout<<s[0];
            remove(s.substr(1));
        }
    }
}

int main(){
  string s;
  cin>>s;
  remove(s);
return 0;
}
