#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long a,b,c,d;
	cin >> a >> b >> c >> d;
	if(b%a ==0 && c%b==0 && d%c==0)
	{
		if((b/a)==(c/b)&& (c/b)==(d/c))		cout << "YES\n";
		else						cout << "NO\n";
	}
	else 				cout << "NO\n";
	return 0;
}
