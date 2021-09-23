#include<bits/stdc++.h>
using namespace std;

void print_sub_seq(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return ;
    }
    else{
        print_sub_seq(input.substr(1),output);
        print_sub_seq(input.substr(1),output+input[0]);
    }
}

int main(){
  string s;
  cin>>s;
  string out = "";
  print_sub_seq(s,out);
return 0;
}