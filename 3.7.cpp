#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long t=0;
	for(int i=0;i<=n;i+=3)
	{
		t+=i;
	}
	cout << t;
	return 0;
}
