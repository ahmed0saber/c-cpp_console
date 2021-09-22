#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	cout<<"Enter equation like this 5+8 then press enter"<<endl<<endl;
	int x , y , i=0 , n , digits , max;
	string input , num1="" , num2="";
	cin>>input;
	digits=input.size()-1;
	again:
	i=i+1;
	if(input[i]=='+')
	{
	    n=i;
	    while(n>0)
	    {
		    num1=num1+input[i-n];
		    n=n-1;
	    }
	    digits=digits-num1.size();
	    max=digits;
	    while(digits>0)
	    {
	    	num2=num2+input[i+1+(max-digits)];
	    	digits=digits-1;
		}
	}
	else
	{
		goto again;
	}
	stringstream a(num1);
	a>>x;
	stringstream b(num2);
	b>>y;
	cout<<" = "<<x+y;
}
