#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void selectionSort(int a[], int n)
{
	// Buoc i: Chon phan tu nho nhat chua duoc sap xep va hoan vi voi a[i]
	for(int i= 0 ; i<n-1;i++)
	{
		// di tim phan tu nho nhat trong cho con lai de hoan vi voi phan tu dau tien
		int min_pos = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j] < a[min_pos] )
			{
				min_pos = j;
			}
		}
		// doi cho a[i], a[min_pos]
		int tmp= a[i];
		a[i]= a[min_pos];
		a[min_pos] = tmp;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
		selectionSort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
