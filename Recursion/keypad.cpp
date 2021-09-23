#include<bits/stdc++.h>
using namespace std;

string value(int n)
{
    switch(n){
        case 2 : return "abc";
        case 3 : return "def";
        case 4 : return "ghi";
        case 5 : return "jkl";
        case 6 : return "mno";
        case 7 : return "pqrs";
        case 8 : return "tuv";
        case 9 : return "wxyz";
    }
}
int keyboard(int n,string ans [])
{
    if(n==0)
    {
        ans[0]="";
        return 1;
    }
    int l=n%10;
    int smallno = n/10;
    int count =keyboard(smallno,ans);
    string res = value(l);
    int size = res.size();
    for(int i=size-1;i>=0;i--)
    {
        for(int j=0;j<count;j++){
            ans[count+j]=res[i]+ans[j];
    }
    count*=2;
    }
    return count;
}


int main(){
  int n;
  cin>>n;
  string * ans = new string[1000];
  int count = keyboard(n,ans);
  for(int i=0;i<count;i++)
  {
      cout<<ans[i]<<endl;
  }

return 0;
}