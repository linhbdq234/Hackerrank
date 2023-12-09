#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long x,y,z,t;
	cin >> x >> y >> z >> t;
	cout << y << "," << z << "," << x << "," << t <<endl ;
	long long k =  x+y+z+t;
	cout << k <<endl;
	long long m =  x-y+z*t;
	cout << m ;
	return 0;
}
