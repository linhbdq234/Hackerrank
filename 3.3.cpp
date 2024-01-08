#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i=n;i>=0;i--)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i=0;i<=n;i+=2)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i=1;i<=n;i+=2)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i=0;i<n;i++)
	{
		if(i%4==0){
		cout << i << " ";
	}	
	}
	cout << endl;
	for(int i=0;i<n;i++)
	{
		cout << (char) (i+97) << " ";
	}
	cout << endl;
	for(int i=n;i>0;i--)
	{
		cout << (char) (122-i+1)<< " ";
	}
}
