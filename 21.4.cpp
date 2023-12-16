/* M?t nhân viên làm vi?c trong công ty du?c luu l?i các thông tin sau:

Mã nhân viên: du?c gán giá tr? là 00001
H? tên: Xâu ký t? không quá 50 ch? cái.
Gi?i tính: Nam ho?c Nu
Ngày sinh: dúng theo chu?n dd/mm/yyyy
Ð?a ch?: Xâu ký t? không quá 100 ch? cái
Mã s? thu?: Dãy s? có dúng 10 ch? s?
Ngày ký h?p d?ng: dúng theo chu?n dd/mm/yyyy
Vi?t chuong trình nh?p m?t nhân viên (không nh?p mã) in ra màn hình thông tin c?a nhân viên dó.

Input Format

G?m 6 dòng l?n lu?t ghi các thông tin theo th? t? dã ghi trong d? bài. Không có mã nhân viên.

Constraints

N/A

Output Format

Ghi ra d?y d? thông tin nhân viên trên m?t dòng, các thông tin cách nhau dúng m?t kho?ng tr?ng.

Sample Input 0

Nguyen Thi Nhung
Nu
28/09/1999
Ha Nam
8850288467
13/07/2021
Sample Output 0

00001 Nguyen Thi Nhung Nu 28/09/1999 Ha Nam 8850288467 13/07/2021
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
class NhanVien{
	private:
	string manv = "00001",hoten,gioitinh,ngaythang1,tinh,ngaythang2;
	ll sdt;
	public:
		void nhapthongtin();
		void xuatthongtin();
};
void NhanVien::nhapthongtin(){
	getline(cin, hoten);
	cin >> gioitinh >> ngaythang1 ;
	cin.ignore();
	getline(cin, tinh);
	cin >> sdt >> ngaythang2;
	
	
}
void NhanVien::xuatthongtin(){
	if(ngaythang1[2]!= '/') ngaythang1="0" + ngaythang1;
		if(ngaythang1[5]!= '/')	ngaythang1.insert(3, "0");
	if(ngaythang2[2]!= '/') ngaythang2="0" + ngaythang2;
		if(ngaythang2[5]!= '/')	ngaythang2.insert(3, "0");
	cout << manv << " " <<hoten <<" " << gioitinh << " " << ngaythang1 << " "<< tinh << " "<< sdt << " "<< ngaythang2 ;
}
int main()
{
	NhanVien x;
	x.nhapthongtin();
	x.xuatthongtin();
	return 0;
}
