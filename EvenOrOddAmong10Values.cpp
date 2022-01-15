#include <iostream>
using namespace std;
int main()
{
	int i , a=0 , b=0 , list[10] , list1[10] , list2[10];
	for(i=0;i<10;i++)
	{
		cout<<"Enter the value number "<<i+1<<" : ";
		cin>>list[i];
	}
	for(i=0;i<10;i++)
	{
		if(list[i]%2==0)
		{
			list1[a]=list[i];
			a++;
		}
		else
		{
			list2[b]=list[i];
			b++;
		}
	}
	cout<<"\n\n";
	for(i=0;i<a;i++)
	{
		cout<<"The Even value number "<<i+1<<" is "<<list1[i]<<endl;
	}
	cout<<"\n\n";
	for(i=0;i<b;i++)
	{
		cout<<"The Odd value number "<<i+1<<" is "<<list2[i]<<endl;
	}
}
