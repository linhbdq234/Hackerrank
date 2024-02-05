#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll gt(int n)
{
	if(n==0)	return 1;
	else		return n* gt(n-1);
}
int main()
{
	int n;
	cin >> n;
	cout << gt(n) << endl;
	return 0;
}