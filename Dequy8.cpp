#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll gcd(ll a,ll b)
{
    if(b==0)     return a;
    return gcd(b,a%b);
}
int main()
{
    ll a,b;
    cin >> a >> b;
    cout << gcd(a,b) << " " << ((ll) a/gcd(a,b)) *b << endl;
    return 0;
}