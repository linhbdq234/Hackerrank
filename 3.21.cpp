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
		tong+= n[i]-'0';	
	}
	cout << tong;
	return 0;
}
