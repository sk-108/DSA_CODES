#include<bits/stdc++.h>
using namespace std;

int subs(string input , string output [])
{
    if(input.size()==0)
    {
        output[0]="";
        return 1;
    }
    else{
        string smallstring = input.substr(1);
        int count = subs(smallstring,output);
        for(int i=0;i<count;i++)
        {
            output[i+count]=input[0]+output[i];
        }
        count=count*2;
        return count;

    }
}


int main(){
  string input;
  cin>>input;
  string output [1000];
  int count = subs(input,output);
  for(int i=0;i<count;i++)
  {
      cout<<output[i]<<endl;
  }
return 0;
}