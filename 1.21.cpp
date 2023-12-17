#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int tong1 = a+b+c;
	int tong2= 2*(a+b);
	int tong3= 2*(b+c);
	int tong4= 2*(b+c);
	cout << min({tong1,tong2,tong3,tong4}) << endl;
	return 0;
}
