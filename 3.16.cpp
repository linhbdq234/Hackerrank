#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long tong =0;
	for(int i=2;i<=2*n;i+=2)
	{
		tong+=i;
	}
	cout << tong;
	return 0;
}
