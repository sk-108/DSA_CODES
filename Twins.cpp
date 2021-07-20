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
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a.rbegin(),a.rend());
	int half=sum/2;
	sum=0;
	int c=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum<=half)
		{
			c++;
		}
		else 
			break;
		
	}
	c++;
	cout<<c<<endl;
	
			
	return 0;
}
