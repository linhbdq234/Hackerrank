#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long ;
bool check(ll n)
{
    if(n==0)    return true;
    else if(n%10%2==1)    return false;
    else return check(n/10);
}
int main()
{
    ll n;
    cin >> n;
    if(check(n)==1)    cout << "YES\n";
    else        cout << "NO\n";
    return 0;
}