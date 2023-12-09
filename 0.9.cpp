/*Cho s? nguyên duong N có ít nh?t 5 ch? s?, nhi?m v? c?a b?n là xóa di 3 ch? s? cu?i cùng c?a N và in ra nh?ng ch? s? còn l?i. Ví d? N = 12345 sau khi xóa di 3 ch? s? cu?i cùng thì N = 12. G?i ý, d?i v?i phép chia nguyên n?u b?n mu?n xóa di 1 ch? s? cu?i cùng ch? c?n l?y N chia nguyên cho 10, ví d? N = 12345 / 10 = 1234, tuong t? N = 12345 / 100 = 123, N = 12345 / 1000 = 12....

Input Format

Dòng duy nh?t ch?a s? nguyên duong N

Constraints

10000<=N<=10^18

Output Format

In ra N sau khi xóa di 3 ch? s? cu?i cùng

Sample Input 0

999999999999993728
Sample Output 0

999999999999993
*/
/// muon xoa di 3 chu so cuoi cung thi chia cho 1000
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	cout << (long long)n/1000; //long long vi 10^18 chia cho 1000 con 10^15 tran int roi
	return 0;
}
