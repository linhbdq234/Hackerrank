#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll prime[1000001];
ll F[1000001];
void sang()
{
    // prime[cac so] =1 thi la so nguyen to, prime =0 thi khong phai 
    // gia su tat ca deu la so nguyen to
    for(int i=0;i<=1000000;i++)
    {
        prime[i]=1;
    }
    // so 0 va 1 khong pai so nguyen to 
    prime[0]=0;
    prime[1]=0;
    // tu 2 den can 10000000 tim cac so nguyen to, va loai di boi cua chung
    for(int i=2;i<=sqrt(1000000);i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                // hop so prime =0
                prime[j]=0;
            }
        }
    }
}
int main()
{ 
    sang();
    ll tich=1;
    ll mod= pow(10,9)+7;
    for(int i=0;i<=1000000;i++)
    {
        if(prime[i]==1)
        {
            tich= ((ll) tich%mod)* (i%mod);
            tich%=mod;
           
        }
        F[i]=tich;
    }
    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        if(m==0 || m==1)    cout << "0" << endl;
        else    cout << F[m] << endl;
    }
    return 0;
}