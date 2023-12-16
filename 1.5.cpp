#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#define pi 3.14  // define <rut gon> <thu muon rut gon>
using namespace std;
int main()
{
	int n,m,p,q;
	cin >> n >> m >> p >> q;
	cout << fixed << setprecision(2) << (double) sqrt((double)(pow((p-n),2)+pow((q-m),2)));
	return 0;
}
