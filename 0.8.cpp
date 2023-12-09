/*Trong ngôn ng? l?p trình nhu C, C++, Java khi b?n s? d?ng 2 s? nguyên d? chia cho nhau thì k?t qu? c?a phép chia dó ch? d? l?i ph?n nguyên cho dù b?n có d? k?t qu? ? s? th?c nhu float hay double. Ví d? a = 10, b = 3 thì phép chia a / b s? có k?t qu? là 3 thay vì 3.3333, d? l?y du?c ph?n th?p phân khi chia 2 s? nguyên cho nhau b?n c?n th?c hi?n ép ki?u a ho?c b, ho?c c? 2 và b sang d?ng s? th?c tru?c khi chia. Ví d? float c = (float) a / b thì khi dó c = 3.3333

G?i ý : B?n nên s? d?ng s? double khi chia th?p phân d? k?t qu? có d? chính xác t?t hon

Input Format

1 dòng duy nh?t ch?a l?n lu?t 2 s? nguyên b và a;

Constraints

1<=a,b<=1000;

Output Format

Dòng 1 in ra thuong c?a a / b khi s? d?ng phép chia nguyên; Dòng 2 in ra thuong c?a a / b khi s? d?ng phép chia l?y ph?n th?p phân v?i d? chính xác 2 s? sau d?u ph?y.

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
