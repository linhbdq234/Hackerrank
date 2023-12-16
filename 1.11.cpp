#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	 int a,b,c;
	cin >> a >> b >> c;
	int k=pow(a,2);
	int l= pow(b,2);
	int m=pow(c,2);
	if((a+b)>c && (a+c)>b && (b+c)>a ){
	if(a==b && b==c){	cout << "1" <<endl;
	}
		else if(a==b && b!=c || b==c && b!=a || a==c && a!=b){
		cout << "2" << endl; }
		else if( (k+l)==m || (k+m)==l || (l+m)==k){
			cout << "3" << endl;
		}else
		{
			cout << "4" << endl;
		}
	}
	else cout << "INVALID\n";
	return 0;
}
