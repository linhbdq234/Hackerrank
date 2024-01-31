#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
int snt(int n)
{
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int uoc(int n)
{
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)	return i;
		if(n/i != i)	return n/i;
	}
}
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		if(i==1) cout << "1\n";
		if(uoc(i)%2==0)	cout << "2\n";
		if(uoc(snt(i))==1)	cout << i;
	}
	return 0;
}