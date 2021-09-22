#include <iostream>
using namespace std;
int main()
{
	string _input ;
	bool _protected=false , money_reached , valid=false ;
	again :
	cout<<"Enter the input : ";
	cin>>_input;
	for(int i=0;i<_input.length();i++)
	{
		if(_input[i]=='$')
		{
			valid=true;
			break;
		}
	}
	if(!valid)
	{
		cout<<"Input must contain $\n";
		goto again ;
	}
	for(int i=0;i<_input.length();i++)
	{
		if(_input[i]=='T')
		{
			_protected = false ;
		}
		else if(_input[i]=='G')
		{
			_protected = true ;
		}
		if(money_reached&&(_input[i]=='T'||_input[i]=='G'))
		{
			break ;
		}
		else if(_input[i]=='$')
		{
			if(_protected)
			{
				cout<<"Protected from left";
			}
			else
			{
				cout<<"Not Protected from left";
			}
			_protected = false ;
			money_reached = true;
		}
	}
	cout<<endl;
	if(_protected)
	{
		cout<<"Protected from right";
	}
	else
	{
		cout<<"Not Protected from right";
	}
}
