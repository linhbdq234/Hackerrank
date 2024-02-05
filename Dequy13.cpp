/* tinh tong
123456789
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
int main()
{
	string n;
	cin >> n;
	ll tong=0;
	for(int i=0;i<n.size();i++)
	{
		tong+=n[i]-'0';
	}
	cout << tong;
	return 0;
}