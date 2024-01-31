#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
int snt(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	for(int i=1;i<=t;i++)
	{
	int n;
	cin >> n;
	for(int j=2;j<=n;j++)
	{
	if(snt(j))	cout << j << " " << n-j;
	cout << endl;
	}
}
	return 0;
}