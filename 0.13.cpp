/* Cho 4 s? nguyên x, y, z, t. Nhu b?n dã bi?t, d? tìm s? l?n nh?t và nh? nh?t trong 2 s? ta có th? s? d?ng hàm max, min c?a thu vi?n math. Ngoài ra d? tìm max, min c?a nhi?u s? b?n có th? s? d?ng hàm max, min c?a thu vi?n , ví d? d? tìm max c?a a, b, c có th? dùng max({a, b, c}), chú ý d?t các bi?n vào trong ngo?c nh?n n?u mu?n tìm max, min c?a 3 s? tr? lên. Bài toán yêu c?u b?n tìm nh?ng s? sau : Dòng 1 in ra s? l?n hon trong 2 s? x, y. Dòng 2 in ra s? nh? hon trong 2 s? z, t. Dòng 3 in ra s? l?n nh?t trong 3 s? x, y, z. Dòng 4 in ra s? nh? nh?t trong 4 s? x, y, z, t. Ví d? tìm max, min c?a 3 s? :

#include <algorithm>

int a = 20, b = 30, c = 40;
cout << max({a, b, c}) << endl;
cout << min({a, b, c}) << endl;
N?u dùng devC++ mà không ch?y du?c hàm max, min v?i 3 s? tr? lên thì b?n c?n ch?y v?i chu?n C++11 tr? lên m?i h? tr?. Vào devc => tool => compiler option => setting => code generation => language standard => GNUC++11 => OK

Input Format

4 s? x, y, z, t l?n lu?t trên 4 dòng.

Constraints

1<=x, y, z, t <= 1000;

Output Format

In ra 4 dòng theo yêu c?u.

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
