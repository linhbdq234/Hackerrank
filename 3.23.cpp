/*
28techland là vùng d?t mà cu dân c?c kì thích u?ng bia, vì th? d? tang s? lu?ng bia bán ra các c?a hàng bia ? dây dua ra khuy?n m?i nhu sau : C? 3 v? chai bia s? du?c d?i m?t chai bia m?i. Bi?t r?ng ? 28techland, m?i chai bia có giá 28 xu, nhi?m v? c?a b?n là xác d?nh v?i N xu cho tru?c, b?n có th? mua du?c t?i da bao nhiêu chai bia tính c? vi?c d?i thu?ng b?ng v? chai?

G?i ý : Bu?c 1 : Tính s? lu?ng chai bia mua b?ng ti?n (n / 28). Sau dó làm 1 vòng l?p while v?i di?u ki?n l?p là s? lu?ng v? chai mình có >= 3, bên trong vòng l?p thì tính s? lu?ng chia bia d?i du?c và c?p nh?t v? chai.

Input Format

Dòng duy nh?t ch?a N là s? d?ng xu ban d?u
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m= ceil(n/28);
	int tong=m;
	while(m>=3)
	{
		tong+= ceil(m/3);
		m=m%3+(int) m/3;
	}
	cout << tong;
	return 0;
}
