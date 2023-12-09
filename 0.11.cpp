/* 
Cho s? nguy�n N h�y in ra k?t qu? c?a nh?ng ph�p to�n sau : D�ng 1. In ra 2 l?n s? N, D�ng 2. In ra 10 l?n s? N, D�ng 3. In ra k?t qu? c?a ph�p chia nguy�n c?a N v?i 2, D�ng 4. In ra k?t qu? c?a ph�p chia l?y ph?n th?p ph�n c?a N v?i 2, in ra 3 ch? s? ph?n th?p ph�n.

G?i � : Khi nh�n N v?i 10 c� th? b? tr�n, v� N t?i da l� 10^9 => 10 * N = 10^10 vu?t gi?i h?n s? int n�n b?n c?n x? l� tr�n ch? d�.

Input Format

D�ng duy nh?t ch?a s? nguy�n duong N

Constraints

1<=N<=10^9

Output Format

In ra 4 d�ng theo y�u c?u, m?i k?t qu? c�ch nhau th�m 1 d�ng tr?ng, xem output d? r� hon y�u c?u.

Sample Input 0

570
Sample Output 0

1140

5700

285

285.000
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int n; // 1<=n<=10^9
	cin >> n;
	cout << (int) 2*n << endl << endl << (long long) 10*n << endl << endl << (int) n/2 << endl << endl << fixed << setprecision(3)<< (double)n/2;
	return 0;
}
 

