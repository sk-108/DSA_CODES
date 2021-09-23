#include<bits/stdc++.h>
using namespace std;

bool check(string s,int c,int n)
{
    if(c==n/2)
    {
        return true;
    }
   
        if(s[c]!=s[n-c-1])
        {
            return false;
        }
        else{
            c++;
            int ans = check(s,c,n);
            return ans;
        }
}

int main(){

  string s;
  cin>>s;
  cout<<check(s,0,s.size());
return 0;
}