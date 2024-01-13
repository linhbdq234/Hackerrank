#include <bits/stdc++.h>
#include <iostream>
int main()
{
	int n;
	cin >> n;
	int tong=0;
	for(int i=1;i<=sqrt(n);i++)
	{
  	if(n%i==0)
	{
	int j=n/i;
	if(i!=j)  tong+=(i+j);
	else      tong+=n/i; // truong hop i la can cua n thi chi liet ke 1 lan thoi k se bi trung
	}
	}
	cout << tong;
return 0;
}	
