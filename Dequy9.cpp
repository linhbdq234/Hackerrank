#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll mod=1000000007;
ll luythua(int n,int m)
{
    if(m==0)    return 1;
    ll x = luythua(n,m/2);
    if(m%2==0)
    {
        return x*x;
    }
    else return x*x*n;
}
int main()
{
    int n,m;
    cin >> n >> m;
    cout << luythua(n,m) << endl;
    return 0;
}