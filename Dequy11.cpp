/*
12%2=0 6%2=0 3%2=1 1%2=1
 12 1100
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
void nhiphan(ll n)
{
    if(n==0)    return ;
    else
    {
    nhiphan(n/2);
    cout << n%2;
    }
}
int main()
{
    ll n;
    cin >> n;
    if(n==0)    cout << 0;
    else nhiphan(n);
    return 0;
}