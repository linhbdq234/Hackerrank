#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int cnt=0,tongc=0;
    int k=0,tongl=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
        ++cnt;    
        tongc+=a[i];
        }
        else
        {        
        ++k;
        tongl+=a[i];
    }
    }
    cout << cnt << endl << k << endl << tongc << endl << tongl;
    return 0;
}