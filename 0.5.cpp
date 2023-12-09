#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double m = sqrt(n);
	double k = cbrt(n);
	cout << fixed << setprecision(2) << m << endl << fixed << setprecision(3) << k;
	return 0;
}
