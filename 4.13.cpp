#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll F[1000000];
int main()
{
	ll n;
	cin >> n;
	F[1]=1;
	F[2]=1;
	for(int i=3;i<=1000000;i++)
	{
		F[i]= F[i-1]+ F[i-2];
		if(n<=F[i])
		{
			cout << F[i];
			return 0;
		}
	}
	return 0;
}