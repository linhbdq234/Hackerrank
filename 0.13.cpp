/* Cho 4 s? nguy�n x, y, z, t. Nhu b?n d� bi?t, d? t�m s? l?n nh?t v� nh? nh?t trong 2 s? ta c� th? s? d?ng h�m max, min c?a thu vi?n math. Ngo�i ra d? t�m max, min c?a nhi?u s? b?n c� th? s? d?ng h�m max, min c?a thu vi?n , v� d? d? t�m max c?a a, b, c c� th? d�ng max({a, b, c}), ch� � d?t c�c bi?n v�o trong ngo?c nh?n n?u mu?n t�m max, min c?a 3 s? tr? l�n. B�i to�n y�u c?u b?n t�m nh?ng s? sau : D�ng 1 in ra s? l?n hon trong 2 s? x, y. D�ng 2 in ra s? nh? hon trong 2 s? z, t. D�ng 3 in ra s? l?n nh?t trong 3 s? x, y, z. D�ng 4 in ra s? nh? nh?t trong 4 s? x, y, z, t. V� d? t�m max, min c?a 3 s? :

#include <algorithm>

int a = 20, b = 30, c = 40;
cout << max({a, b, c}) << endl;
cout << min({a, b, c}) << endl;
N?u d�ng devC++ m� kh�ng ch?y du?c h�m max, min v?i 3 s? tr? l�n th� b?n c?n ch?y v?i chu?n C++11 tr? l�n m?i h? tr?. V�o devc => tool => compiler option => setting => code generation => language standard => GNUC++11 => OK

Input Format

4 s? x, y, z, t l?n lu?t tr�n 4 d�ng.

Constraints

1<=x, y, z, t <= 1000;

Output Format

In ra 4 d�ng theo y�u c?u.

Sample Input 0

586
617
778
37
Sample Output 0

617
37
778
37
*/ 
// su dung ham min , max cho nhanh
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int x,y,z,t;
	cin >> x >> y >> z >> t;
	cout << max({x,y})<< endl << min({z,t}) << endl << max({x,y,z})<< endl << min({x,y,z,t});
	return 0;
}
