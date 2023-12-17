#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cin >> m >> n;
	if(m%2==0)
	{
		cout << (long long)m/2 *n;
	}else
	{
		if(n%2==0)
		{
			cout <<(long long) ((m-1)/2)*n+n/2;
		}else
		{
			cout <<(long long) ((m-1)/2)*n+(n-1)/2;
		}
	}
	return 0;
}
