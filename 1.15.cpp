#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long n;
	int a,b;
	cin >>n >> a>> b;
	if(2*a<=b)
	{
		cout << n*a;
	}
	else
	{
		if(n%2==0)
		{
			cout << (n/2)*b;
		}else
		{
			long long m=n/2;
			cout <<a+m*b;
		}
	}
	return 0;
}
