#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
int main()
{
	int n;
	cin >> n;
	ll res=1;
	for(int i=0;i<n;i++)
	{
		int p,e;
		cin >> p >> e; // phan tich so thanh dang n = p1 ^e1 * p2 ^e2 *....
		res= res*(e+1); // cong thuc la p= (e1 +1) * (e2+1) *(e3+1) *....
		res %= 1000000007 ;
	}
	cout << res;
}