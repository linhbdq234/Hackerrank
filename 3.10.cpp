#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long tong=0;
	for(int i=1;i<=sqrt(n);i++)
	{
  	if(n%i==0)
	{
	long long j=n/i;
	if(i!=j)  tong+=(i+j);
	else      tong+=n/i; // truong hop i la can cua n thi chi liet ke 1 lan thoi k se bi trung
	}
	}
	cout << tong;
	return 0;
}	
