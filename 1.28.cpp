#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long a,b,c;
	cin >> a>> b >> c;
	long long t=0;
	for(int i=1;i<=a;i++)
	{
	(long long)	t+=b;
		b+=c;
	}
	cout << t;
	return 0;
}
