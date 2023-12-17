#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m= n/365;
	int k= (n-365*m)/7;
	cout << m << " " << k << " " << n-365*m-k*7;
	return 0;
}
