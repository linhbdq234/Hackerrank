#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int nt(int n)
{
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	double tong=0;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(nt(a[i])==1)
		{
			tong+=a[i];
			++cnt;
		}
	}
	cout << fixed << setprecision(3)<< (double) tong/cnt;
	return 0;
}