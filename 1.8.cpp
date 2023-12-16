#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long a,b;
	cin >> a >>b;
	if(b==0) cout << (long long) a+b << endl << (long long) a-b << endl << (long long) a*b <<endl << "INVALID";
	else{
	cout << (long long) a+b << endl << (long long) a-b << endl << (long long) a*b << endl << fixed << setprecision(4) << (double)a/b;}
	return 0;
}
