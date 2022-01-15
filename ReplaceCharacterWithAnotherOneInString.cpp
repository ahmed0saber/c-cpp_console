#include <iostream>
using namespace std ;
int main()
{
	string Num ;
	char a , b ;
	cout<<"Enter the number : ";
	cin>>Num;
	cout<<"Enter the digit you want to change : ";
	cin>>a;
	cout<<"Enter the digit to use instead : ";
	cin>>b;
	for(int i=0 ; i<Num.length() ; i++)
	{
		if(Num[i]==a)
		{
			Num[i]=b;
		}
	}
	cout<<Num;
}
