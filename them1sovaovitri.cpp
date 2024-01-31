// n=10, input 3 9 1 2 4 5 7 8 10 4
// output  3 9 1 x 2 4 5 7 8 10 4
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int a[10]={3,9,1,2,4,5,7,8,10,4};
	int n=10;
	// vi tri muon them pan tu
	int k=3, x=100; // so 2
	for(int i=n-1;i>k;i--)
	{
		a[i]=a[i-1];
	}
	a[k]=x;
	++n;
	for(int i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}