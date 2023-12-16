#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	char c;
	cin >> c;
	if(c>='A' && c<='Y')
	{
		cout << (char)((int) c +33);
	}
	else if(c>='a' && c<='y')
	{
		cout << (char)((int)c+1);
	}else if(c=='z' || c =='Z')
	{
		cout << "a";
}
	return 0;
}
