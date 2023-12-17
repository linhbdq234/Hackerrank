/* Cho bi?t tháng và nam, hãy in ra s? ngày tuong ?ng có trong tháng dó. Chú ý tháng 2 c?a nam nhu?n có 29 ngày. Nam nhu?n là nam chia h?t cho 400 ho?c (chia h?t cho 4 và không chia h?t cho 100)
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	if(a>=1 && a<=12 && b>0){
	if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
	{
		cout << 31;
	}else if(a== 4 || a==6 || a==9 || a==11)
	{
		cout << 30; 
	}else
	{
		if(b%400==0 || b%4==0 && b%100 !=0 )
		{
		cout << 29;
	}else
	{
		cout << 28;
	}
	
}
}else{
    cout << "INVALID\n";
}
return 0;
}
