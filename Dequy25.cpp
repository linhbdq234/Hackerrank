#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for(int i=0;i<n;i++)
    {
    	if(a[i]==m)
    	{
    		cnt=1;
		}
	}
    if(cnt==1) cout << "1";
    else		cout << "0";
    return 0;
}
    