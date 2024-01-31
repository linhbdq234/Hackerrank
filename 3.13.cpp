// 7! = 1*2*3*4*5*6*7 co 3=3*1, 6=3*2 -> 7! chia het cho 3^2
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll legend(ll a, int b)
{
	ll m=0;
	while(a>=b)
	{
	m+= (ll)a /b;    // = [n/p] + [n/p^2] +....
	a/=b;
	}
	return m;
}
int main()
{
	ll a;
	int b;
	cin >> a >> b;
	cout << legend(a,b);
	return 0;
}