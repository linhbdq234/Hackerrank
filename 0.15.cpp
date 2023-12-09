/* 28tech di mua v?, anh ta c� N d?ng, m?i quy?n v? c� gi� X d?ng. H?i anh ta mua du?c t?i da bao nhi�u quy?n v? ? V� d? anh ta c� 15 d?ng v� m?i quy?n v? c� gi� 6 d?ng th� anh ta mua du?c 2 quy?n, v?y trong l?p tr�nh b?n t�nh nhu th? n�o ?

Input Format

1 d�ng duy nh?t ch?a 2 s? nguy�n N v� X

Constraints

1<=X<=1000; 0<=N<=10^12;

Output Format

In ra s? lu?ng s? s�ch mua du?c k�m theo 1 s? l?i d?n v� d?u ch?m than. Xem output d? r� hon y�u c?u.

Sample Input 0

142 43
Sample Output 0

SO VO MUA DUOC LA : 3 !!!!!
Sample Input 1

487 12
Sample Output 1

SO VO MUA DUOC LA : 40 !!!!!
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long x,y;
	cin >> x  >> y;
	if(x>=y)	cout << "SO VO MUA DUOC LA : " << (long long) (x/y) << "!!!!!";
	else		cout << "SO VO MUA DUOC LA : " << (long long) (y/x) << "!!!!!";
	return 0;
}
