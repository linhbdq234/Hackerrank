/*Trong ng�n ng? l?p tr�nh nhu C, C++, Java khi b?n s? d?ng 2 s? nguy�n d? chia cho nhau th� k?t qu? c?a ph�p chia d� ch? d? l?i ph?n nguy�n cho d� b?n c� d? k?t qu? ? s? th?c nhu float hay double. V� d? a = 10, b = 3 th� ph�p chia a / b s? c� k?t qu? l� 3 thay v� 3.3333, d? l?y du?c ph?n th?p ph�n khi chia 2 s? nguy�n cho nhau b?n c?n th?c hi?n �p ki?u a ho?c b, ho?c c? 2 v� b sang d?ng s? th?c tru?c khi chia. V� d? float c = (float) a / b th� khi d� c = 3.3333

G?i � : B?n n�n s? d?ng s? double khi chia th?p ph�n d? k?t qu? c� d? ch�nh x�c t?t hon

Input Format

1 d�ng duy nh?t ch?a l?n lu?t 2 s? nguy�n b v� a;

Constraints

1<=a,b<=1000;

Output Format

D�ng 1 in ra thuong c?a a / b khi s? d?ng ph�p chia nguy�n; D�ng 2 in ra thuong c?a a / b khi s? d?ng ph�p chia l?y ph?n th?p ph�n v?i d? ch�nh x�c 2 s? sau d?u ph?y.

Sample Input 0

30 70
Sample Output 0

2
2.33
Sample Input 1

39 259
Sample Output 1

6
6.64
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	if(a>=b)	{
		cout << (int) a/b << endl; 
		cout << fixed << setprecision(2) << (double) a/b;
	}
	else
	{	cout << (int) b/a << endl;
		cout << fixed << setprecision(2) << (double) b/a;
	}
	return 0;
}
