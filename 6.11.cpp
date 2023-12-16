#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define mod 1000000007
long long a[95];
int main()
{
	int n;
	cin >> n;
	a[1]=1;
	a[2]=1;	
	for(int i=3;i<=92;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=1;i<=n;i++)
	{
	cout << a[i] << endl;
}
	return 0;
}
