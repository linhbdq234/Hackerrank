
// kiem tra mang doi xung 
/*
5
1 2 3 2 1
YES
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
bool check(int a[], int l, int r)
{
    if(l>r) return true;
    else if(a[l]!=a[r]) return false;
    else return check(a,l+1,r-1);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
if(check(a,0,n-1)) cout << "YES\n";
else        cout << "NO\n";
return 0;
}	{
		if(n%2==1)
		{
		if(f[i]==f[n-i-1])
		{
			cnt=0;
		}
		else
		cnt=1;
	}
}
if(cnt==0)	cout << "YES\n";
else		cout << "NO\n";
return 0;
}