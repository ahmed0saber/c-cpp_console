#include <iostream>
using namespace std;
int i=0 , n=0 , a[5]={0,0,0,0,0};
int my_function()
{
	if(i<5)
	{
		if(a[i]==0)
		{
			n=n+1;
		}
		i++;
		my_function();
	}
}
int main()
{
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	i=0;
	my_function();
	cout<<"Number of 0 is : "<<n;
}
