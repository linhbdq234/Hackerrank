// tim chu so nho nhat va chu so lon nhat
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll Min(ll n)
{
	if(n<10)	return n;
	else return min(n%10,Min(n/10));
}
ll Max(ll n)
{
	if(n<10)	return n;
	else return max(n%10,Max(n/10));
}
int main()
{
	ll n;
	cin >> n;
	cout << Max(n) << " " << Min(n) << endl ;
	return 0;
}