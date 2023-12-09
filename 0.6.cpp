// floor la lam tron xuong so nguyen gan nhat
// round lam trong so nguyen phu thuoc phan thap phan
// ceil lam tron len so nguyen gan nhat
// cac ham nay tra ve double
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	double x;
	cin >> x ;
	cout <<(int) floor(x) << endl <<(int) ceil(x) << endl <<(int) round(x);
	// phai ep kieu cai tren vi no chi dung voi cac so nho, neu so kia lon qua no se tra ve .0 nen ep luon (int)
	return 0;
}
