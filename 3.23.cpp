/*
28techland l� v�ng d?t m� cu d�n c?c k� th�ch u?ng bia, v� th? d? tang s? lu?ng bia b�n ra c�c c?a h�ng bia ? d�y dua ra khuy?n m?i nhu sau : C? 3 v? chai bia s? du?c d?i m?t chai bia m?i. Bi?t r?ng ? 28techland, m?i chai bia c� gi� 28 xu, nhi?m v? c?a b?n l� x�c d?nh v?i N xu cho tru?c, b?n c� th? mua du?c t?i da bao nhi�u chai bia t�nh c? vi?c d?i thu?ng b?ng v? chai?

G?i � : Bu?c 1 : T�nh s? lu?ng chai bia mua b?ng ti?n (n / 28). Sau d� l�m 1 v�ng l?p while v?i di?u ki?n l?p l� s? lu?ng v? chai m�nh c� >= 3, b�n trong v�ng l?p th� t�nh s? lu?ng chia bia d?i du?c v� c?p nh?t v? chai.

Input Format

D�ng duy nh?t ch?a N l� s? d?ng xu ban d?u
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
