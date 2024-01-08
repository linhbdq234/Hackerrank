#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<=n;i+=3)
	{
		cout << i << " ";
	}
	cout << endl ;
	int k=0;
	for(int i=1;i<=n;i++)
	{
		if(i==pow(2,k))
		{
			cout << i << " ";
			k++;
		}
	}
	cout << endl;
	for(int i=n;i<=2*n;i++)
	{
		if(i%17==0 && (i-n)<17)
		{
			cout << i;
	
		}
		
	}
	cout << endl ;
	for(int i=2;i<=n;i++)
	{
		if((n-i)<7 && i%7==0)
		{
			cout << i;
		}
	}
		cout << endl ;
		int cnt=0;
	for(int i=1;i<=n;i+=cnt)
	{
		cout << i << " ";
		cnt++;
	}
}
