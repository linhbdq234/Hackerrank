#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long ;
ll f[1000002];
int main()
{
    int t;
    cin >> t;
    f[0]=1;
    int mod=1000000007;
    for(int i=1;i<=1000000;i++)
    {
        f[i]=(f[i-1]%mod) * (i%mod);
        f[i]%=mod;
    }
    while(t--)
    {
    int m;
    cin >> m;
        cout << f[m] << endl;
    }
    return 0;
}