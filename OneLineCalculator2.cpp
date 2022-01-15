#include <iostream>
using namespace std;
int main()
{
	float n , m ;
	char s ;
	cin>>n >>s >>m;
	cout<<" = ";
	if(s=='+')
	{
		cout<<n+m;
	}
	else if(s=='-')
	{
		cout<<n-m;
	}
	else if(s=='*')
	{
		cout<<n*m;
	}
	else if(s=='/')
	{
		cout<<n/m;
	}
}
