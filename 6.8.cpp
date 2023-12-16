#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define mod 1000000007

int main()
{
	int n;
	cin >> n;
	long long tich =1;
	for(int i=1;i<=n;i++)
	{
		tich *=i;
		tich%=mod;
		cout << tich << endl ;

	}

	return 0;
}
	
