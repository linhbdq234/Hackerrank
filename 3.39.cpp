#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m=n;
	int cnt=1;
	int so=1;
	for(int i=1;i<=n;i++)
	{
		int kitu= 2*n-m;
		int kt= kitu-so;
		for(int j=1;j<=kt;j++)
		{
			cout << " " << " ";
		}
		//nua trai
		int r=cnt-i+1;
		for(int j=1;j<=so/2;j++)
		{
			cout << cnt << " ";
		}
		so+=2;
		--m;
		cnt+=2;
		cout << endl;
	}
	return 0;
	}
