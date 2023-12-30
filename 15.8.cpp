#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int cnt=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='2' && s[i]!='8' && s[i]!='t' && s[i]!='e' && s[i]!='c' && s[i]!='h')
		{
			cnt++;
			cout << s[i];
		}
	}
	if(cnt==0)	cout << "EMPTY";
	return 0;
}
