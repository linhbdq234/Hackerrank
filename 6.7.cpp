#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define mod 1000000007
int main()
{
	int n;
	cin >> n;
	long long tich = 1;
	for(int i=0;i<n;i++)
	{
		long long m ;
		cin >> m; 
		tich *= (m%mod); 
		tich %= mod;
	}
	cout << tich ;
}
