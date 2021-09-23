#include<bits/stdc++.h>
using namespace std;

void adjacent(string s)
{
    if(s.size()==0)
    {
        return ;
    }
    else{
        // cout<<s<<endl;
        if(s[0]==s[1])
        {
            cout<<s[0]<<"*";
            adjacent(s.substr(1));
        }
        else{
            cout<<s[0];
            adjacent(s.substr(1));
        }

    }
}

int main(){
  string s;
  cin>>s;
  adjacent(s);
//   cout<<s;
return 0;
}