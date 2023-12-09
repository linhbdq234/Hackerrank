/*
Cho F(x, y) = 5 * x + 2 * y + x * y, v?i x, y du?c nh?p t? bàn phím hãy in ra k?t qu? c?a F(x, y). M?i khi tính toán k?t qu? ph?i chú ý t?i gi?i h?n c?a bài toán, d? xác d?nh xem k?t qu? c?a bài toán s? n?m t?i ngu?ng nào d? l?a ch?n ki?u d? li?u cho phù h?p.

G?i ý : Chú ý x * y có th? b? tràn

Input Format

Dòng duy nh?t ch?a 2 s? x, y trên 1 dòng.

Constraints

x, y là s? nguyên; 1<=x, y<=10^6;

Output Format

In ra k?t qu? c?a hàm F(x, y)

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
