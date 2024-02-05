// quay theo kim dong ho
// input 1 2 3 4 5 6 7 8 9 10
// output 10 1 2 3 4 5 6 7 8 9
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int n=10;
	int k=0;
	int x=10;
	for(int i=n-1;i>=1;i--)
	{
	 a[i]= a[i-1];
	}
	a[k]=x; cout << a[k] << " ";
	for(int i=1;i<n;i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}