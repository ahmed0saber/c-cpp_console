#include <iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	cout<<"(x+i)(x+j)(x+k)(x+l)=??\n";
	cout<<"Enter i : ";
	cin>>i;
	cout<<"Enter j : ";
	cin>>j;
	cout<<"Enter k : ";
	cin>>k;
	cout<<"Enter l : ";
	cin>>l;
	cout<<"\n\n\n = x^4 + "<<i+j+k+l<<"x^3 + "<<i*j+j*k+i*k+i*l+j*l+k*l<<"x^2 + "<<i*j*k+i*j*l+i*k*l+j*k*l<<"x + "<<i*j*k*l;
}
