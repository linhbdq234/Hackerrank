/*
Vi?t chuong trình khai báo l?p Sinh Viên g?m các thông tin: Mã SV, H? tên, L?p, Ngày sinh và Ði?m GPA (d?ng s? th?c float). Hàm kh?i t?o không có tham s?, gán các giá tr? thu?c tính ? tr?ng thái m?c d?nh (xâu ký t? r?ng, giá tr? s? b?ng 0). Ð?c thông tin 1 sinh viên t? bàn phím (không có mã sinh viên) và in ra màn hình. Trong dó Mã SV du?c gán là SV001. Ngày sinh du?c chu?n hóa v? d?ng dd/mm/yyyy.

Input Format

G?m 4 dòng : 1. H? tên không quá 30 ch? cái.

L?p là m?t chu?i không có d?u cách

Ngày sinh có d? 3 ph?n ngày tháng nam nhung có th? chua dúng chu?n dd/mm/yyyy.

Ði?m GPA d?m b?o trong thang di?m 4 v?i 2 nhi?u nh?t 2 s? sau d?u ph?y.

Constraints

N/A

Output Format

Ghi thông tin sinh viên trên 1 dòng, m?i thông tin cách nhau 1 kho?ng tr?ng, gpa l?y 1 ch? s? sau d?u ph?y

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
