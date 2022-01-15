#include <iostream>
using namespace std;
int main()
{
	float a , b , num;
	cout<<"Enter 2 integers :-\n";
	cin>>a>>b;
	if(b<a)
	{num=((a+b)/2)*(a-b+1);}
	else{num=((a+b)/2)*(b-a+1);}
	cout<<num;
}
