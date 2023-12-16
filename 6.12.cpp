#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define mod 95
#define ll long long 
int a[mod];
bool check(ll n)
{
	for(int i=0;i<=92;i++)
	{
	if(n==a[i])		return true;
	}	
	return false;
}
int main()
{
	int t;
	cin >> t;
	ll n;
	for(int i=1;i<=t;i++)
	{
		cin >> a[i];
	}
	a[0]=0;
	a[1]=1;	
	for(int i=2;i<=92;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	cin >> n;
	}
	for(int i=1;i<=t;i++){
	if(check(n))	cout << "YES\n";
		else			cout << "No\n";
	}
	return 0;
}

