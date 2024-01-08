#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m=3;
	while(m<=n)
	{
		cout << m << " ";
		m+=3;
	}
	cout << endl;
	for(int i=0;i<=n;i+=15)
	{
		cout << i << " ";
	}
		cout << endl;
	for(int i=n;;i++) // 
	{
		if(i%7==0)
		{
			cout << i ;
			break;
		}
	}
	cout << endl;
	for(int i=n;i>0;i--) // 
	{
		if(i%9==0)
		{
			cout << i ;
			break;
		}
	}
	cout <<endl;
	for(int i=1;i<=2*n-1;i+=2)
	{
		cout << i << " ";
	}
	return 0;
}
