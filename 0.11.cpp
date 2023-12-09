/* 
Cho s? nguyên N hãy in ra k?t qu? c?a nh?ng phép toán sau : Dòng 1. In ra 2 l?n s? N, Dòng 2. In ra 10 l?n s? N, Dòng 3. In ra k?t qu? c?a phép chia nguyên c?a N v?i 2, Dòng 4. In ra k?t qu? c?a phép chia l?y ph?n th?p phân c?a N v?i 2, in ra 3 ch? s? ph?n th?p phân.

G?i ý : Khi nhân N v?i 10 có th? b? tràn, vì N t?i da là 10^9 => 10 * N = 10^10 vu?t gi?i h?n s? int nên b?n c?n x? lý tràn ch? dó.

Input Format

Dòng duy nh?t ch?a s? nguyên duong N

Constraints

1<=N<=10^9

Output Format

In ra 4 dòng theo yêu c?u, m?i k?t qu? cách nhau thêm 1 dòng tr?ng, xem output d? rõ hon yêu c?u.

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
 

