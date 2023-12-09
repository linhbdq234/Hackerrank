/* Khi b?n chia du 1 s? cho s? nguy�n N th� s? du c?a ph�p chia d� s? l� c�c s? t? 0 t?i N - 1. V� d? khi b?n chia cho 5 th� ph�p chia c� s? du c� th? l� 0, 1, 2, 3, 4. B�i to�n n�y y�u c?u c�c b?n nh?p 2 s? a v� b sau d� t�m ph�p du khi chia a cho b.

Input Format

D�ng duy nh?t ch?a 2 s? nguy�n a, b, gi?a a v� b ch?a 5 d?u c�ch

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

