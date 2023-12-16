#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define mod 1000000007
long long a[1000000];
int main()
{
	long long tong=0;
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=1000000;i++)
	{
		a[i]=(2*a[i-1]+ 3*a[i-2]);
		a[i] %= mod;
		
	}
int n; 
cin >> n;	cout << a[n] ;
return 0;
}
