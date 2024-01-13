#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n==1){
	cout << "-1" ;
	return 0;
}
	else if(n>1 && n%2==0)
	{
		cout << (int) n/2 << endl;
		for(int i=1;i<=n/2;i++)
		{
			cout << "2" << " ";
		}
	}else if(n>1 && n%2!=0)
	{
		cout << (int) n/2 << endl;
		for(int i=1;i<=(n-3)/2;i++)
		{
			cout << "2" << " ";
		}
		cout << "3";
	}
	return 0;
}
