#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using db = double;
db tong(int n)
{
	if(n==1)	return 1;
	else return (db) 1/n +tong(n-1);
}
int main()
{
	int n;
	cin >> n;
	cout << fixed << setprecision(3) << tong(n) << endl;
	return 0;
}