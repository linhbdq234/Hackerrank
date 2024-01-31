#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll F[1000000];
int fibo(ll n)
{
	F[1]=0;
	F[2]=1;
	int cnt=0;
	for(int i=3;i<=1000000;i++)
	{
		F[i]=F[i-1]+F[i-2];
		if(n==F[i])	cnt=1;
	}
	if(cnt==1)	return 1;
	else		return 0;
}
int main()
{
	int  t;
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		ll n;
		cin >> n;
		if(fibo(n)==1)	cout << "YES\n";
		else			cout << "NO\n";
	}
	return 0;
}