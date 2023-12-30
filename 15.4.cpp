#include <bits/stdc++.h> // khi cin 1 chuoi ki tu xong muon loai bo di dau enter de ham getline doc het ca 2 du lieu thi ta dung cin.ignore() (no se loai bo duoc 1 ki tu bat ki dang sau)
#include <iostream>	// vi neu khong loai bo dau enter di thi getline no se doc trong luon cin va doc moi dau enter
using namespace std; // getchar cung duoc nhung ma thuong dung trong C
int main() //getline no se xu ly luon phim enter o dong do roi nen sau dong duoc getline doc se k can cin.ignore nua
{
	string s;
	cin >> s;
	int cnt=0;
	for(int i=0;i<s.size();i++)
	{
		if(((s[i]-'0')-(s[i+1]-'0'))==1 || ((s[i+1]-'0')-(s[i]-'0'))==1 )
		{
			cnt=0;
		}
		else
		cnt=1;
	}
	if(cnt==0)	cout << "YES\n";
	else		cout << "NO\n";
	return 0;
}
