#include <bits/stdc++.h> // 1h7phut B9
#include <iostream>
using namespace std;
using ll = long long;
ll a[1000001];
ll F[1000001];

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        --l;--r; // tru di de gan voi chi so trong mang
        ll tong=0;
        for(int i=l;i<=r;i++) // i tu l den r
        {
        	tong+= a[i];
		}
        cout << tong << endl;
    }
        
}