#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%2!=0)
	{
		cout<<0;
	}
	else{
		if(n%4==0)
		{
			cout<<n/4-1;
		}
		else{
			cout<<n/4;
		}
	}
	// if(n<=2)
	// {
	// 	cout<<0;
	// 	return 0;
	// }
	// int ans=n/2;
	// if(ans%2==0)
	// {
	// 	ans=ans-1;
	// 	ans=ans/2;
	// 	cout<<ans;
	// 	}
	// else{
	// 	cout<<ans/2;
	// }
}
