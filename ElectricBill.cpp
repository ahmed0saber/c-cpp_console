#include <iostream>
using namespace std;
int main()
{
	float cmr , pmr , kp , discount;
	int type;
	again:
	cout<<"Enter the current meter reading in kilowatt"<<endl;
	cin>>cmr;
	cout<<"Enter the previous meter reading in kilowatt"<<endl;
	cin>>pmr;
	cout<<"Choose the type of meter by entering 1 or 2"<<endl<<"1.home   2.commercial"<<endl;
	cin>>type;
	if(cmr>pmr&&(type==1||type==2))
	{
		cout<<endl<<"Kilowatt Consumption = "<<cmr-pmr<<endl;
		if(type==1)
		{
			kp=0.5;
		}
		else if(type==2)
		{
			kp=0.6;
		}
		cout<<"Kilowatt Price = "<<kp<<" $"<<endl;
		cout<<"Consumption Cost = "<<kp*(cmr-pmr)<<" $"<<endl;
		cout<<"Value Added Tax (VAT) = "<<kp*(cmr-pmr)*14/100<<" $"<<endl;
		if(type==1)
		{
			if((cmr-pmr)<200)
			{
				discount=kp*(cmr-pmr)*10/100;
			}
			else if((cmr-pmr)>=200)
			{
				discount=kp*(cmr-pmr)*15/100;
			}
		}
		else if(type==2)
		{
			if((cmr-pmr)<400)
			{
				discount=kp*(cmr-pmr)*15/100;
			}
			else if((cmr-pmr)>=400)
			{
				discount=kp*(cmr-pmr)*20/100;
			}
		}
		cout<<"Discount Amount = "<<discount<<" $"<<endl;
		cout<<"Net Total = "<<(kp*(cmr-pmr))+(kp*(cmr-pmr)*14/100)-discount<<" $"<<endl;
	}
	else
	{
		cout<<"There is an error , Try again..."<<endl<<endl;
		goto again;
	}
}
