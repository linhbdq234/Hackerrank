#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	int m = n%10;
	cout << m <<endl;
	int k = n%100;
	if((int) k/10 !=0)   cout << k ; // vi du 1005 in 1 chu so cuoi la 5, in 2 chu so cuoi se la 05 thi muon in 5 thi lam nhu nay =))
	else 		cout << (int) k%10;
	return 0;
}
