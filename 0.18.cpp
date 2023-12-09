/* Cho 2 s? nguyên a, b b?n hãy hoán d?i giá tr? 2 s? a và b sau dó tính giá tr? bi?u th?c 128 * a + 97 * b + 1000 in ra màn hình. Ð? hoán d?i giá tr? a, b b?n có th? dùng swap(a, b) ho?c dùng bi?n t?m nhu sau : int tmp = a; a = b; b = tmp;

Input Format

Dòng duy nh?t g?m 2 s? a, b
Constraints

0<=a,b<=10^9
Output Format

In ra a b sau khi hoán d?i giá tr?

Sample Input 0

12 16
Sample Output 0

4212
*/
#include <bits/stdc++.h>
#include <iostream>
#define ll long long  // define <rut gon> <thu muon rut gon>
using namespace std;
int main()
{
	ll a,b;
	cin >> a >> b;
	ll tmp = a;
	a = b;
	b = tmp;
	cout << (ll) 128*a + 97 * b + 1000 ;
	return 0;
}
	
