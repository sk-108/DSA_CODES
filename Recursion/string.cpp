#include<bits/stdc++.h>
using namespace std;




int main(){
  string *s = new string;
  *s = "abac";
  cout<<s<<" "<<*s<<endl;
  *s = "sfkadslf";
  cout<<*s<<endl;
  string k = "aaaa";
  cout<<k<<endl;
  k="bbbbb";
  cout<<k<<endl;
  string sk;
  sk="sourav kumar singh ";
  cout<<sk.length()<<endl;
  cout<<sk.substr(3)<<endl;
  cout<<sk.substr(3,6)<<endl;
  cout<<sk.find("kumar");
return 0;
}