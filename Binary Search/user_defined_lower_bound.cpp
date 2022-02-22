#include<bits/stdc++.h>
using namespace std;

int n;
int A;
int arr[100100];

bool check(int x)
{
	return arr[x]>=A;
}
void solve()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element to search its lower bound "<<endl;
	cin>>A;
	int lo = 0,hi = n-1,ans = 0;
	while(lo<=hi)
	{
		int mid = (lo + hi)/2;
		if(check(mid))
		{
			ans = mid;
			hi = mid - 1;
		}
		else{
			lo = mid + 1;
		}
	}
	cout<<ans<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

