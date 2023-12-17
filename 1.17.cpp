#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	double a,b,c,d;
	cin >> a >> b >> c >> d;
	double t= a+b+c*2+d*3;
	double k= ((double) t )/7;
	if(k>=8)
	{
		cout << "GIOI\n";
	}else if(k>=6.5 && k<8)
	{
		cout << "KHA\n";
	}else if(k>=5 && k<6,5)
	{
		cout << "TRUNG BINH\n";
	}
	else
	{
		cout << "YEU\n";
	}
	return 0;
}
