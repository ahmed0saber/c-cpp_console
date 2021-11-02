#include <iostream>
using namespace std;
int main()
{
	int number , digit , frequency=0 , temp;
	cout<<"Enter a number (ex 100507): ";
	cin>>number;
	temp=number;
	cout<<"Enter the digit you want to calculate its frequency (ex 0):";
	cin>>digit;
	while(temp>0)
	{
		if(temp%10==digit)
		{
			frequency++;
		}
		temp/=10;
	}
	cout<<"The number "<<number<<" contains "<<frequency<<" digits of "<<digit;
}
