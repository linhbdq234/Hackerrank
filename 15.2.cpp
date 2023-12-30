#include <bits/stdc++.h> // khi cin 1 chuoi ki tu xong muon loai bo di dau enter de ham getline doc het ca 2 du lieu thi ta dung cin.ignore() (no se loai bo duoc 1 ki tu bat ki dang sau)
#include <iostream>	// vi neu khong loai bo dau enter di thi getline no se doc trong luon cin va doc moi dau enter
using namespace std; // getchar cung duoc nhung ma thuong dung trong C
int main() //getline no se xu ly luon phim enter o dong do roi nen sau dong duoc getline doc se k can cin.ignore nua
{
	string s;
	getline(cin, s);
	for(int i=s.size()-1;i>=0;i--)
	{
		cout << s[i];
	}
	cout << endl;
	for(int i=0;i<s.size();i++)
	{
		cout << (char) tolower(s[i]);
	}
	cout << endl;
	for(int i=0;i<s.size();i++)
	{
		cout <<(char) toupper(s[i]);
	}
	return 0;
}
