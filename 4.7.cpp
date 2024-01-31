#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
int snt(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)    return 0;
    }
    return n>1;
}
int check(int n)
{
    while(n>0)
    {
        int m=n%10;
        if(m!=2 && m!=3 && m!=5 && m!=7)    return 0;
        n/=10;
    }
    return 1;
}
int tong(int n){
    int tong1 = 0;
    while(n>0){
        tong1 += n % 10;
        n /= 10;
    }
    return snt(tong1) ;
}
int main()
{
    int a,b;
    cin >> a>> b;
    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        if(check(i)==1 && tong(i) && snt(i)) 
        {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}