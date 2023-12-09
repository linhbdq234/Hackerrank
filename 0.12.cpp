/*
Cho F(x, y) = 5 * x + 2 * y + x * y, v?i x, y du?c nh?p t? b�n ph�m h�y in ra k?t qu? c?a F(x, y). M?i khi t�nh to�n k?t qu? ph?i ch� � t?i gi?i h?n c?a b�i to�n, d? x�c d?nh xem k?t qu? c?a b�i to�n s? n?m t?i ngu?ng n�o d? l?a ch?n ki?u d? li?u cho ph� h?p.

G?i � : Ch� � x * y c� th? b? tr�n

Input Format

D�ng duy nh?t ch?a 2 s? x, y tr�n 1 d�ng.

Constraints

x, y l� s? nguy�n; 1<=x, y<=10^6;

Output Format

In ra k?t qu? c?a h�m F(x, y)

Sample Input 0

6 3
Sample Output 0

54
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long x,y; // 1<=x,y<=10^6			// bai nay buoc phai ep x,y la long long
	cin >> x >> y ;
	long long k= 5*x + 2*y + x*y;
	cout << k;
	return 0;
}
