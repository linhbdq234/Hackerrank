#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n%400 == 0 || n%4==0 && n%100!=0)	cout << "YES\n";
	else									cout << "NO\n";
	return 0;
}
