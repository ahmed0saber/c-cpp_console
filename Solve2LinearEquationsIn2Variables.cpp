#include <iostream>
using namespace std ;
int main()
{
	float a1 , b1 , c1 , a2 , b2 , c2 , X , Y ;
	cout<<"a1X+b1Y=c1\na2X+b2Y=c2\n\n";
	cout<<"a1=";
	cin>>a1;
	cout<<"b1=";
	cin>>b1;
	cout<<"c1=";
	cin>>c1;
	cout<<"a2=";
	cin>>a2;
	cout<<"b2=";
	cin>>b2;
	cout<<"c2=";
	cin>>c2;
	X=(c1-c2*b1/b2)/(a1-a2*b1/b2);
	Y=(c1-c2*a1/a2)/(b1-b2*a1/a2);
	cout<<"\nX="<<X<<"\nY="<<Y;
}
