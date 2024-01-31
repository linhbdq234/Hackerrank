#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m=n;
	int sao =1;
	for(int i=1;i<=n;i++ )
	{
		int kitu = 2*n-m;
		int kt= kitu -sao;
		for(int j=1;j<=kt;j++)
		{
			cout << " " << " ";
		}
		for(int j=1;j <= sao;j++)
		{
			cout << "*" << " ";
		}
		sao+=2;
		--m;
		cout << endl;
	}
	m=2;
	sao =2*n-3;
	for(int i=n-1;i>=1;i--)
	{
		int kitu = 2*n-m;
		int kt= kitu -sao;
		for(int j=1;j<=kt;j++)
		{
			cout << " " << " ";
		}
		for(int j=1;j <= sao;j++)
		{
			cout << "*" << " ";
		}
		sao-=2;
		++m;
		cout << endl;
	}
}


