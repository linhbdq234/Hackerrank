#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long a,b,c,d;
	cin >> a>> b >> c >> d;
	cout << max({a,b,c,d}) << " " << min({a,b,c,d});
	return 0;
}
