#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	char c;
	cin >> c;
	if(c>='0' && c<='9')	cout <<"DIGIT\n";
	else if(c>='A' && c<='Z') 	cout << "UPPER\n";
	else if(c>='a' && c<='z')	cout << "LOWER\n";
	else
		cout << "SPECIAL\n";
	return 0;
}
