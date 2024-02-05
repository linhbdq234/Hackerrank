/* 
1100 -> 12
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
void thapphan(ll n)
{
    if(n==0)    return ;
    else
    {
        thapphan(n/16);
        if(n%16<=9)    cout << n%16;
        else    cout << (char) (n%16+55);
    }
}
int main()
{
    ll n;
    cin >> n;
    if(n==0)    cout << 0;
    else thapphan(n);
    return 0;
}