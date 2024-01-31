#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
// ham tim so co 3 uoc so // sang so nguyen to
ll p[1001];
void sang()
{
	for(int i=1;i<=1000;i++)
	{
		p[i]=1;
		p[0]=p[1]=0;
	}
	for(int i=2;i<=sqrt(1000);i++)
	{
		if(p[i])
		{
			for(int j=i*i;j<=1000;j+=i)
			{
				p[j]=0;
			}
		}
	}
}
int main()
{
	sang();
	ll n;
	cin >> n;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(p[i])	cout << i*i << " ";
	}
	return 0;
}