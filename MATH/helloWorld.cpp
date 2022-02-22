#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	string s = to_string(n);
	string res;
	for(int i=0;i<s.size();i++)
	{
		char c = s[i];
		if(i==0)
		{
			if(c=='9')continue;
		}
		if(c>='5')
		{
			c = '9'-c;
		}
		res.push_back(c);
	}
	cout<<res<<endl;
}
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}