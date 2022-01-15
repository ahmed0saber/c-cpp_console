#include <iostream>
using namespace std;
int main()
{
	string _input;
	int sum=0;
	cout<<"Enter a number : ";
	cin>>_input;
	for(int i=0;i<_input.length();i++)
	{
		sum+=(_input[i] - '0');
	}
	cout<<"Sum = "<<sum;
}
