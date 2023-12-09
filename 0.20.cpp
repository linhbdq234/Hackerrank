/* Cho s? N, b?n h�y in ra s? N v?i 6 ch? s?, n?u N kh�ng d? 6 ch? s? th� ti?n h�nh ch�n 0 v� d?u # v�o d?u cho d? 6 ch? s?.

G?i � d�ng

cout << setw(K) << setfill(k� t?) << N << endl;
Trong d� K l� d? r?ng s? ch? s? b?n mu?n in ra, th�m thu vi?n ch?a setw v� setfill. T�m ki?m google n?u c?n thi?t : setfill function library c++

Input Format

D�ng duy nh?t ch?a s? N

Constraints

0<=N<10^6

Output Format

D�ng 1 in ra N v?i s? 0 du?c ch�n v�o tru?c

D�ng 2 in ra N v?i d?u # du?c ch�n v�o tru?c

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
