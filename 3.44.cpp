#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(i%2!=0)
			{
				cout << (char) (63+i+j);
				}else
				{
					cout << (char) (95+i+j);
					}
					}
					cout << endl;
					}
					return 0;
					}
			
