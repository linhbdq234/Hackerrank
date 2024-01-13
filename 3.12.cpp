#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	for(int i=1;i<=sqrt(n);i++)
	{
		cout << (long long) i*i << " ";
	}
	return 0;
}
