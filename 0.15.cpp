/* 28tech di mua v?, anh ta có N d?ng, m?i quy?n v? có giá X d?ng. H?i anh ta mua du?c t?i da bao nhiêu quy?n v? ? Ví d? anh ta có 15 d?ng và m?i quy?n v? có giá 6 d?ng thì anh ta mua du?c 2 quy?n, v?y trong l?p trình b?n tính nhu th? nào ?

Input Format

1 dòng duy nh?t ch?a 2 s? nguyên N và X

Constraints

1<=X<=1000; 0<=N<=10^12;

Output Format

In ra s? lu?ng s? sách mua du?c kèm theo 1 s? l?i d?n và d?u ch?m than. Xem output d? rõ hon yêu c?u.

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
