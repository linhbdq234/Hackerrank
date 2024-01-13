#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cnt=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout << cnt << " ";
			cnt++;
		}
		cout << endl ;
	}
	cout << endl;
	int m=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=i-1;j<=n;j++)
		{
			cout << m << " ";
			m++;
		}
	
		cout << endl ;
	}
	cout << endl;
	
	return 0;
}
