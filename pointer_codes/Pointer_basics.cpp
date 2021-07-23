#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	
	 int i; //has some garbage value
	 i++;
	//  cout<<i<<endl;
	// int *p; has some random address which can be really dangerous (it can points to some read only memory)
	 //so a good practice is to intialized the pointer at time of intialization
	 int *p=0;
	 cout<<*p<<endl;
	 (*p++);
	 cout<<*p<<endl;
	// int i=10;
	// int *p=&i;  //pointing towards i
	// int *q=p;   //pointer q is also pointing towards i
	// cout<<*q<<endl;
  return 0;
}
