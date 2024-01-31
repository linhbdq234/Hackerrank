#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long ;
int cp(ll n)
{
	ll m= sqrt(n);
	if((ll) m*m == n)
		return 1;
	else return 0;
}
int main()
{
	ll a,b;
	cin >> a >> b;
	ll k=sqrt(a);
	ll l=sqrt(b);
	if((ll) k*k<a)	++k;
	int cnt=0;
	for(ll i=k;i<=l;i++)
	{
		++cnt;
	}
	cout << cnt;
	return 0;
}