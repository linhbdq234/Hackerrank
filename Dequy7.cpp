#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll tohopchap(int n,int k)
{
	if(k==0)	return 1;
	return (ll)n/((ll)k*(n-k)) + tohopchap(n-1,k-1);
}
int main()
{
	int n,k;
	cin >> n >> k;
	cout << tohopchap(n,k);
}