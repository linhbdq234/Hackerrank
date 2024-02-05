#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll f[1000000];
int main()
{
	f[0]=0;
	f[1]=0;
	f[2]=1;
	ll mod = 1000000007;
	for(int i=3;i<=1000000;i++)
	{
		f[i]=(f[i-1]%mod)+(f[i-2]%mod)+(f[i-3]%mod);
		f[i]%=mod;
	}
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << f[n] << endl ;
	}
	return 0;
}