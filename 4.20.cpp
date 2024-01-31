#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long ;
int cp(ll n)
{
	ll m= sqrt(n);
	if((ll) m*m ==n)	return 1;
	return 0;
}
int main()
{
	ll n;
	cin >> n;
	if(cp(n)==1)	cout << "YES\n";
	else	cout << "NO\n";
	return 0;
}