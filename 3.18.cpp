#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long tong =0;
	for(long long i=1;i<=n;i++)
	{
		tong+= pow(i,3);
	}
	cout << tong;
	return 0;
}
