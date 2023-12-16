#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{
	long long n,m,p;
	cin >> n >> m >> p;
	long long tich=1;

	int mod = pow(10,p);
	for(int i=1;i<=m;i++)
	{
	tich*= (n%mod); ;
	tich %= mod;


}
cout << tich << endl;
	return 0;
}
