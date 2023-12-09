/* Cho s? N, b?n hãy in ra s? N v?i 6 ch? s?, n?u N không d? 6 ch? s? thì ti?n hành chèn 0 và d?u # vào d?u cho d? 6 ch? s?.

G?i ý dùng

cout << setw(K) << setfill(kí t?) << N << endl;
Trong dó K là d? r?ng s? ch? s? b?n mu?n in ra, thêm thu vi?n ch?a setw và setfill. Tìm ki?m google n?u c?n thi?t : setfill function library c++

Input Format

Dòng duy nh?t ch?a s? N

Constraints

0<=N<10^6

Output Format

Dòng 1 in ra N v?i s? 0 du?c chèn vào tru?c

Dòng 2 in ra N v?i d?u # du?c chèn vào tru?c

Sample Input 0

850
Sample Output 0

000850
###850
*/
// co the dung cout << setw(K) <<setfill(ki tu) << N << endl;
// K la do rong so chu so muon in ra, them thu vien chua setw va setfill
#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#define ll long long  // define <rut gon> <thu muon rut gon>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << setw(6) << setfill('0') << n << endl;
	cout << setw(6) << setfill('#') << n << endl;
	return 0;
}
