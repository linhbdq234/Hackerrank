#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll a[1000001];
ll f[1000001];
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	/*
	a 3 7 2 4 8 1 1 5 5
	f 0 4 1 3 7 6 6 10 10
	*/
	f[0]=0;
	f[1]=abs(a[0]-a[1]);
	for(int i=2;i<n;i++)
	{
		f[i]=min(f[i-1]+abs(a[i]-a[i-1]), f[i-2]+abs(a[i]-a[i-2]));
	}
	cout << f[n-1] << endl;
	return 0;
}
