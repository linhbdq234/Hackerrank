/* Khi b?n chia du 1 s? cho s? nguyên N thì s? du c?a phép chia dó s? là các s? t? 0 t?i N - 1. Ví d? khi b?n chia cho 5 thì phép chia có s? du có th? là 0, 1, 2, 3, 4. Bài toán này yêu c?u các b?n nh?p 2 s? a và b sau dó tìm phép du khi chia a cho b.

Input Format

Dòng duy nh?t ch?a 2 s? nguyên a, b, gi?a a và b ch?a 5 d?u cách

Constraints

1<=a,b<=10^6;

Output Format

In ra s? du khi chia a cho b

Sample Input 0

806     605
Sample Output 0

201
*/
// phuong phap lam lay a-((int) a/b) * b

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int a , b; // vi 1<= a,b <= 10^6
	cin >> a >> b;
	if(a>=b)	cout << a-((int)a/b)*b;
	else		cout << a ;
	return 0;
 } 

