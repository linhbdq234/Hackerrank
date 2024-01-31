#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long ;
int cp(ll n)
{
    int m=sqrt(n);
    if((ll)m*m == n)
        return 1;
    return 0;
}
int main()
{
    ll a,b;
    cin >> a >> b;
    ll k= sqrt(a);
    ll l= sqrt(b);
     if( (ll) k*k < a) ++k;
    for(int i=k;i<=l;i++)
    {
            cout << (ll)i*i << " ";
    }
    return 0;
}