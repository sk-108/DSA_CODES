#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100100];

bool check(int x)
{
	return arr[x]>=arr[0];  
}

void solve()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int lo = 0;
	int hi = n - 1;
	int ans  = 0;
	while(lo<=hi)
	{
		int mid = (lo + hi)/2;
		if(check(mid))
		{
			lo  = mid + 1;
		}
		else{
			ans = mid;
			hi = mid - 1 ;
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

