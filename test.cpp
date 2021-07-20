#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(string a,string b)
{
	int l1=a.size();
	int l2=b.size();
	if(l1>l2)return true;
	else 
	return false;
}

int main()
{
	int n;
	cin>>n;
	vector<string>a(n);

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	sort(a.begin(),a.end(),comp);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
 return 0;
}
