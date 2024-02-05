#include <bits/stdc++.h>   
#include <iostream>
using namespace std;
using ll = long long;
ll tong(int n)
{
    if(n==0)    return n;
    else
    return pow(-1,n) * n +tong(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << tong(n) << endl;
    return 0;
}