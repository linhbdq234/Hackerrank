#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	string n;
	cin >> n;
	int tong=0;
	for(int i=0;i<n.size();i++)
	{
		if(n[i]=='2' || n[i]=='3' || n[i]=='5' || n[i]=='7')
		{
			tong++;
		}
	}
	cout << tong;
	return 0;
}
