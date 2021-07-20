#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	int max=0,c=0;
	for(auto i=m.begin();i!=m.end();i++)
	{
		if(max<(i->second))
		{
			max=i->second;

		}
		c++;
		
	}

	cout<<max<<" "<<c<<endl;
	
}
