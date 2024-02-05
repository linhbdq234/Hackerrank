/* bai toan nay con soc co the di chuyen tu o 1 den cac o chu khong pai chi o ben canh va o ben canh nua)
*/ 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
ll a[1000001];
ll f[1000001];
int main()
{
    ll c,b;
    cin >> c >>b;
    for(int i=0;i<c;i++)
    {
        cin >> a[i];
    }
    f[0]=0;
    for(int i=1;i<c;i++)
    {
    //xet i-1,i-2,...i-k (k<i)
    ll tmp = LLONG_MAX;
        for(int j=1;j<=b;j++)
        {
            if(i-j>=0)
            tmp=min(tmp,f[i-j]+abs(a[i]-a[i-j]));
        }
        f[i]=tmp;
    }
    cout << f[c-1] << endl;
    return 0;
    
}