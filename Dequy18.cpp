#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long ;
int main()
{
	ll s;
	cin >> s;
	ll tongc =0;
	ll tongl =0;
	while(s>0)
	{
		int m=s%10;
		if(m%2==0)
		{
			tongc+=m;
		}
		else 
		{
			tongl+=m;
		}
		s/=10;
	}
	cout << tongc << endl << tongl << endl;
	return 0;
}