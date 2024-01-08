#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double t=0;
	for(int i=2;i<=2*n;i+=2)
	{
		t+=(double)1/i;
	}
	cout << fixed << setprecision(5) << t;
	return 0;
}
