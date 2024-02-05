#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
void rotate(int a[], int n){
	int tmp= a[n-1]; // cuoi cung
	for(int i=n-1;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=tmp;
}
int main()
{
	int a[50]={1,2,3,4,5,6,7,8,9,10};
	int n=10;
	for(int i=0;i<11;i++)
	{
	rotate(a,n);
	}
	for(int i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
