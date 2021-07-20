#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int sum=0;
	for(int i=0;i<m;i++)
	{
		if(a[i]<0)
		{
			sum+=abs(a[i]);
		}
	}
	cout<<sum<<endl;
}
