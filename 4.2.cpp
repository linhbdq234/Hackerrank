// in ra 1 hoac 0 1. so luong chu so chan cua n la 1 so le
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int ham1(ll n)
{
	int cnt=0;
	while(n>0)
	{
		int m= n%10;
		if(m%2==0)
		{
			cnt++;
		}
	}
	return cnt%2 ==1;
}
int ham2(ll n)
{
	int cnt=0;
	int k=0;
	while(n>0)
	{
		int m= n%10;
		if(m%2==0)
		{
			cnt++;
		}else 	k++;
	}
	return chan > le;
}
int ham3(ll n)
{
	int k=n%10;
	while(n>=0)
	{
		n/=10;
	}
	return k==n;
}
int ham4(ll n)
{
	int t=0;
	while(n>=0)
	{
		t+=n%10;
		n/=10;
	}	
	return t%10 == 8;
}
int snt(ll n)
{
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int ham5(ll n)
{
	int t=0;
	while(n>=0)
	{
		t+=n%10;
		n/=10;
	}	
	return snt(t);
}
int ham6(ll n)
{
	while(n>=10)
	{
		if(abs((n%10)-((n/10)%10)!=1)	return 0;
		n/=10;
	}
	return 1;
}
int ham7(ll n)
{
	int k=n%10;
	while(n>=10)
	{
		if(n%10>k)
		{
			k=n%10;
		}
		n/=10;
	}
	return n> k;
}
int fibo(ll n)
{
	if(n==0 || n==1)	return 1;
	ll  fb1=1,fb2=0;
	for(int i=2;i<=92;i++)
	{
		ll fb = fb1+fb2;
		cout << i << " " << fn << endl;
		if(fn == n)
			return 1;
		fb2 = fb1;
		fb1 = fb;
	}
	return 0;
}
int ham8(ll n){
    int tong = 0;
    while(n){
        tong += n % 10;
        n /= 10;
    }
    return fibo(tong);
}

int tn(ll n){
    ll rev = 0, tmp = n;
    while(n){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return tmp == rev;
}

int ham9(ll n){
    int tong = 0;
    while(n){
        tong += n % 10;
        n /= 10;
    }
    return tn(tong);
}

int ham10(ll n){
    while(n){
        int r = n % 10;
        if(r != 0 && r != 6 && r != 8) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << ham1(n) << endl;
        cout << ham2(n) << endl;
        cout << ham3(n) << endl;
        cout << ham4(n) << endl;
        cout << ham5(n) << endl;
        cout << ham6(n) << endl;
        cout << ham7(n) << endl;
        cout << ham8(n) << endl;
        cout << ham9(n) << endl;
        cout << ham10(n) << endl;
        cout << endl;
    }
}