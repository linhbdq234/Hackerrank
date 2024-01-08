#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long t=0;
	for(int i=0;i<=n;i++)
	{
		t+= pow(i,2);
	}
	cout << t;
	return 0;
}
