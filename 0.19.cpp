/* Cho s? th?c F, nhi?m v? c?a b?n h�y in ra ph?n th?c v� ph?n nguy�n c?a F

Input Format

D�ng duy nh?t ch?a s? th?c F

Constraints

-10^6<=F<=10^6

Output Format

D�ng 1 in ra ph?n nguy�n D�ng 2 in ra ph?n th?c v?i 2 s? sau d?u ph?y

Sample Input 0

9.73
Sample Output 0

9
0.73
*/
#include <bits/stdc++.h>
#include <iostream>
#define ll long long  // define <rut gon> <thu muon rut gon>
using namespace std;
int main()
{
	double x ;
	cin >> x;
	cout << (int) x << endl <<  fixed << setprecision(2) << (double) x - (int) x ;
	return 0;
}
