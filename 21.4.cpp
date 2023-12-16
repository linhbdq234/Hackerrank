/* M?t nh�n vi�n l�m vi?c trong c�ng ty du?c luu l?i c�c th�ng tin sau:

M� nh�n vi�n: du?c g�n gi� tr? l� 00001
H? t�n: X�u k� t? kh�ng qu� 50 ch? c�i.
Gi?i t�nh: Nam ho?c Nu
Ng�y sinh: d�ng theo chu?n dd/mm/yyyy
�?a ch?: X�u k� t? kh�ng qu� 100 ch? c�i
M� s? thu?: D�y s? c� d�ng 10 ch? s?
Ng�y k� h?p d?ng: d�ng theo chu?n dd/mm/yyyy
Vi?t chuong tr�nh nh?p m?t nh�n vi�n (kh�ng nh?p m�) in ra m�n h�nh th�ng tin c?a nh�n vi�n d�.

Input Format

G?m 6 d�ng l?n lu?t ghi c�c th�ng tin theo th? t? d� ghi trong d? b�i. Kh�ng c� m� nh�n vi�n.

Constraints

N/A

Output Format

Ghi ra d?y d? th�ng tin nh�n vi�n tr�n m?t d�ng, c�c th�ng tin c�ch nhau d�ng m?t kho?ng tr?ng.

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
