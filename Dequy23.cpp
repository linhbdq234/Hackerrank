#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
    	if(a[i]%2!=0)
    	{
    		cnt=1;
		}
	}
	if(cnt==0)	cout << "YES\n";
	else 		cout << "NO\n";
	return 0;
}