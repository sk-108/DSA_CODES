#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string s1;
	string s2;
	string s3;
	cin>>s1>>s2>>s3;
	int a[257]={0};
	for(int i=0;i<s1.size();i++)
	{
		a[s1[i]]++;
	}
	for(int i=0;i<s2.size();i++)
	{
		a[s2[i]]++;
	}
	for(int i=0;i<s3.size();i++)
	{
		a[s3[i]]--;
	}
	for(int i=0;i<257;i++)
	{
		if(a[i]>0)
		{
			cout<<"NO"<<endl;
			exit(0);
		}
		else if(a[i]<0)
		{
			cout<<"NO"<<endl;
			exit(0);
		}
	}
	
	cout<<"YES"<<endl;
/*	for(int i=0;i<257;i++)
	{
		cout<<a[i]<<endl;
	}
	* */
}
	
