#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n,m,a;
	cin >> n>> m >> a;
	int t1 = ceil(1.00*n/a);
	int t2 = ceil(1.00*m/a);
	cout << 1ll * t1 *t2;
	return 0;
}
