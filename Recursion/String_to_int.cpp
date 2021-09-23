#include<bits/stdc++.h>
using namespace std;

int convert(string s)
{
    if(s.size()==1)
    {
        return s[0]-'0';
    }
    else{
        int ans = convert(s.substr(1));
        cout<<ans<<endl;
        ans = (s[0]-48)*pow(10,s.size()-1)+ans;
        return ans;
        
    
    }
}

int convert2(string s)
{
    if(s.size()==1)
    {
        return s[0];
    }
    else{
        int ans = s[0]-'0';
        int ans = convert2(s.substr(1));
        ans = ans *10;

    }
}

int main(){
  string s;
  cin>>s;
    // int b=convert(s);
    int b=convert2(s);
  cout<<b;

return 0;
}