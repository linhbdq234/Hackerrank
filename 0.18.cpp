/* Cho 2 s? nguy�n a, b b?n h�y ho�n d?i gi� tr? 2 s? a v� b sau d� t�nh gi� tr? bi?u th?c 128 * a + 97 * b + 1000 in ra m�n h�nh. �? ho�n d?i gi� tr? a, b b?n c� th? d�ng swap(a, b) ho?c d�ng bi?n t?m nhu sau : int tmp = a; a = b; b = tmp;

Input Format

D�ng duy nh?t g?m 2 s? a, b
Constraints

0<=a,b<=10^9
Output Format

In ra a b sau khi ho�n d?i gi� tr?

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
	
