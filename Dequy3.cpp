#include <bits/stdc++.h>   // cthuc [(n * (n + 1) / 2)]^2
#include <iostream>
using namespace std;
using ll = long long;
ll tong(int n)
{
    if(n==0)    return n;
    else
    return pow(n,3)+tong(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << tong(n) << endl;
    return 0;
}