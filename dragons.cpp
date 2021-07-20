#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int s,n;
	cin>>s>>n;
	int a[n];
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		int energy;
		cin>>energy;
		m[a[i]]+=energy;
	}
	sort(a,a+n);
	for(auto i=m.begin();i!=m.end();i++)
	{
		if(s<=i->first){
			cout<<"NO"<<endl;
			exit(0);
		}
		else{
			s+=i->second;
		}
	}
	cout<<"YES"<<endl;
	
	return 0;
}
		
