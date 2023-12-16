/*
Vi?t chuong tr�nh khai b�o l?p Sinh Vi�n g?m c�c th�ng tin: M� SV, H? t�n, L?p, Ng�y sinh v� �i?m GPA (d?ng s? th?c float). H�m kh?i t?o kh�ng c� tham s?, g�n c�c gi� tr? thu?c t�nh ? tr?ng th�i m?c d?nh (x�u k� t? r?ng, gi� tr? s? b?ng 0). �?c th�ng tin 1 sinh vi�n t? b�n ph�m (kh�ng c� m� sinh vi�n) v� in ra m�n h�nh. Trong d� M� SV du?c g�n l� SV001. Ng�y sinh du?c chu?n h�a v? d?ng dd/mm/yyyy.

Input Format

G?m 4 d�ng : 1. H? t�n kh�ng qu� 30 ch? c�i.

L?p l� m?t chu?i kh�ng c� d?u c�ch

Ng�y sinh c� d? 3 ph?n ng�y th�ng nam nhung c� th? chua d�ng chu?n dd/mm/yyyy.

�i?m GPA d?m b?o trong thang di?m 4 v?i 2 nhi?u nh?t 2 s? sau d?u ph?y.

Constraints

N/A

Output Format

Ghi th�ng tin sinh vi�n tr�n 1 d�ng, m?i th�ng tin c�ch nhau 1 kho?ng tr?ng, gpa l?y 1 ch? s? sau d?u ph?y

Sample Input 0

Nguyen Van Nam
CNTT1
16/8/2001
2.8
Sample Output 0

SV001 Nguyen Van Nam CNTT1 16/08/2001 2.8
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define fl float
class SinhVien{
	private:
		string masv = "SV001";
		string hoten, lop, ngaysinh;
		fl gpa;
	public:
		void nhapThongTin();
		void xuatThongTin();
};
void SinhVien::nhapThongTin()
{
	getline(cin, hoten);
	cin >> lop >> ngaysinh >> gpa;
}
void SinhVien::xuatThongTin()
{		if(ngaysinh[2]!= '/') ngaysinh="0" + ngaysinh;
		if(ngaysinh[5]!= '/')	ngaysinh.insert(3, "0");
		cout << masv << " " << hoten << " "<< lop <<" " << ngaysinh << " " << fixed << setprecision(1)<< (fl) gpa ;
}
/* lay thong tin
string SinhVien::getTen(string newName)
{
return ten;
}
doi ten nguoi
void SinhVien::setTen(string newName){
ten = newName;
} 
*/
int main()
{
	SinhVien x;
	x.nhapThongTin();
	x.xuatThongTin();
	/* x.setTen("Vu Van Thuc");
	x.xuatThongTin();
	*/
	return 0;
}
