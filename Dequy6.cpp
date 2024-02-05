#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll f[20];
ll fibo(int n)
{
	if(n==1 ||n==2)	return n-1;
	else 	return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}