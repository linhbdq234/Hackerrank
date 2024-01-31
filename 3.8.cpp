#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
int p[1000000];
void snt()
{   // sang so nto den can gioi han n
	for(int i=0;i<=1000000;i++)
		p[i]=1;
		p[0] = p[1] =0;
	for(int i=2;i<=sqrt(1000000);i++)
	{
		if(p[i]){
			for(int j=i*i;j<=1000000;j+=i)
			{
				p[j]=0;
			}
		}	
	}
}
int main()
{
	snt();
	ll n;
	cin >> n;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(p[i]==1)	cout << i*i << " ";
	}
	return 0;
}
