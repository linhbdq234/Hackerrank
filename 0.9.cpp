/*Cho s? nguy�n duong N c� �t nh?t 5 ch? s?, nhi?m v? c?a b?n l� x�a di 3 ch? s? cu?i c�ng c?a N v� in ra nh?ng ch? s? c�n l?i. V� d? N = 12345 sau khi x�a di 3 ch? s? cu?i c�ng th� N = 12. G?i �, d?i v?i ph�p chia nguy�n n?u b?n mu?n x�a di 1 ch? s? cu?i c�ng ch? c?n l?y N chia nguy�n cho 10, v� d? N = 12345 / 10 = 1234, tuong t? N = 12345 / 100 = 123, N = 12345 / 1000 = 12....

Input Format

D�ng duy nh?t ch?a s? nguy�n duong N

Constraints

10000<=N<=10^18

Output Format

In ra N sau khi x�a di 3 ch? s? cu?i c�ng

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
