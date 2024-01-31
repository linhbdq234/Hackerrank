#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll F[100];
bool check( ll n)
{
    F[0]=0;
    F[1]=1;
    for(int i=2;i<=92;i++)
    {
        F[i]=F[i-1]+F[i-2];
    }
    for(int i=0;i<=92;i++)
    {
        if(n== F[i])    return true;
    }
    return false;
}
bool nt(ll n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)    return false;
    }
    return n>1 ;
}
bool tongfibo(ll n)
{
    ll sum=0;
    while(n)
    {
        sum+= n%10;
        n/=10;    
    }
    return check(sum);
}
int main()
{
    ll n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(tongfibo(i) && nt(i))    
		cout << i << " ";
    }
    return 0;
}