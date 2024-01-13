#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	int cnt=0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			int j=n/i;
			if(i!=j)	cnt+=2;
			else		cnt++;
		}
	}
	cout << cnt << endl;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout << i << " ";
		}
	}
	return 0;
}
