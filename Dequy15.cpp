// tim chu so dau cua so nguyen 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
int main()
{
	ll n;
	cin >>n;
	while(n>=10)
	{
		n/=10;
	}
	cout <<n;
}