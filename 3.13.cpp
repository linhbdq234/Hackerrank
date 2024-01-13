#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long tich=1;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			int j=n/i;
			if(i!=j)	tich*= (long long) i*j;
			else		tich*= (long long)	j;
		}
	}
	cout << tich;
	return 0;
}
