// vecto 
// khai bao vecto<kieu dl> ten
// vd vecto<int> v; tao ra 1 mang trong rong
// muon chen them phan tu vao cuoi thi: v.push_back hoac v.emplace_back
// muon biet co bao nhien phan tu v.size()
// chi so tu 0,1,...
// for(int i=0;i<v.size;i++) cout << v[i] << " " hoac for(int x :v) cout << x << " "
// muon cho so phan tu vecto : vecto<int> v (kichthuoc)
// tat ca bai toan mang 1 chieu or bai toan k bt can bn ptu-> dung vecto
// muon nhap phan tu vidu nhap 6 phan tu thi for(int i=0;i<n;i++)	int x; cin >> x; v.push_back(x);
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin >> n;
	v.push_back(n);
}