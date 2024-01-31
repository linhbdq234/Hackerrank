#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll a[1000005];
int main()
{
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=1000000;i++)
	{
		a[i]= 2* a[i-1] + 3* a[i-2];
		a[i]%= 1000000007;
	}
	int n;
	cin >> n;
	cout << a[n] << endl ;
	return 0;
}