/*
Vi?t chuong trình khai báo l?p Thí Sinh g?m các thông tin: H? tên, Ngày sinh, Ði?m môn 1, Ði?m môn 2, Ði?m môn 3 và T?ng di?m. Ð?c thông tin 1 thí sinh t? bàn phím và in ra màn hình 3 thông tin: H? tên, Ngày sinh, T?ng di?m.

Input Format

G?m 5 dòng l?n lu?t, m?i dòng ghi 1 thông tin: H? tên, Ngày sinh, Ði?m môn 1, Ði?m môn 2, Ði?m môn 3.

Constraints

Các giá tr? di?m là s? th?c (float). H? tên không quá 50 ch? cái. Ngày sinh vi?t dúng chu?n dd/mm/yyyy.

Output Format

Ghi ra H? tên, Ngày sinh và T?ng di?m. M?i thông tin cách nhau m?t kho?ng tr?ng. Ði?m du?c ghi ra v?i 1 s? sau d?u ph?y.

Sample Input 0

Hoang Dinh Nam
28/09/2000
6.1
6.9
6.4
Sample Output 0

Hoang Dinh Nam 28/09/2000 19.4
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class SinhVien{
	private:
		string hoten;
		string ngaysinh;
		double diemmon1,diemmon2,diemmon3,tongdiem;
	public:
		void nhapThongTin();
		void xuatThongTin();
		/*void xuatthongtin()
		{
			cout << hoten << " "<< ngaysinh << " " << fixed << setprecision(1)<< (double) diemmon1 +diemmon2 +diemmon3 ;
}
		 */
};
void SinhVien::nhapThongTin(){
	getline(cin, hoten);
	cin >> ngaysinh >> diemmon1 >> diemmon2 >> diemmon3;
}
void SinhVien::xuatThongTin()
{
	cout << hoten << " "<< ngaysinh << " " << fixed << setprecision(1)<< (double) diemmon1 +diemmon2 +diemmon3 ;
}
int main()
{
	SinhVien x;
	x.nhapThongTin();
	x.xuatThongTin();
	return 0;
	/*
	SinhVien x;
	getline(cin, x.hoten);
	getchar();
	cin >> x.ngaysinh >> x.diemmon1 >> x.diemmon2 >> x.diemmon3;

}



