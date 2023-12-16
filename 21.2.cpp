/*
Vi?t chuong tr�nh khai b�o l?p Th� Sinh g?m c�c th�ng tin: H? t�n, Ng�y sinh, �i?m m�n 1, �i?m m�n 2, �i?m m�n 3 v� T?ng di?m. �?c th�ng tin 1 th� sinh t? b�n ph�m v� in ra m�n h�nh 3 th�ng tin: H? t�n, Ng�y sinh, T?ng di?m.

Input Format

G?m 5 d�ng l?n lu?t, m?i d�ng ghi 1 th�ng tin: H? t�n, Ng�y sinh, �i?m m�n 1, �i?m m�n 2, �i?m m�n 3.

Constraints

C�c gi� tr? di?m l� s? th?c (float). H? t�n kh�ng qu� 50 ch? c�i. Ng�y sinh vi?t d�ng chu?n dd/mm/yyyy.

Output Format

Ghi ra H? t�n, Ng�y sinh v� T?ng di?m. M?i th�ng tin c�ch nhau m?t kho?ng tr?ng. �i?m du?c ghi ra v?i 1 s? sau d?u ph?y.

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



