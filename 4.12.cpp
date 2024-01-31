#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll F[1000000];
void check(ll n)
{

    F[1]=0;
    F[1]=1;
    if(n==0 || n==1 )    
    {
        cout << "YES\n";
        return ;
    }
    int cnt=0;
    for(int i=3;i<=100000;i++)
    {
        F[i]=F[i-1]+ F[i-2];
        if(F[i]==n) ++cnt;
    }  
    if(cnt==1)  cout << "YES\n";
    else    cout << "NO\n";
}
int main()
{
    ll n;
    cin >> n;
    check(n);
    return 0;
    
}