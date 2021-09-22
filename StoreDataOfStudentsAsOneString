#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	string data="", add_data;
	int n=0 , get_data , i=0;
	another_one:
	stringstream ss;
	n=n+1;
	again1:
	cout<<"Enter the ID (5 numbers long) of student number "<<n<<" : ";
	cin>>get_data;
	if(get_data>=10000&&get_data<100000)
	{
		ss<<get_data;
		ss>>add_data;
		data=data+add_data;
		again2:
		cout<<"A boy or a girl ? 1.Boy 2.Girl ... Choose by entering 1 or 2 : ";
		cin>>get_data;
		if(get_data==1||get_data==2)
		{
			stringstream ss;
		    ss<<get_data;
		    ss>>add_data;
		    data=data+add_data;
		    again3:
		    cout<<"Enter the degree of first subject : ";
		    cin>>get_data;
		    if(get_data==100)
		    {
		    	stringstream ss;
		        ss<<get_data;
		        ss>>add_data;
		        data=data+add_data;
		    }
		    else if(get_data<100&&get_data>=10)
		    {
		    	stringstream ss;
		        ss<<get_data;
		        ss>>add_data;
		        data=data+"0"+add_data;
			}
			else if(get_data<10&&get_data>=0)
			{
			    stringstream ss;
		        ss<<get_data;
		        ss>>add_data;
		        data=data+"00"+add_data;	
			}
			else
			{
				cout<<"ERROR!! Degree must be from 0 to 100"<<endl<<endl;
				goto again3;
			}
			again4:
			cout<<"Enter the degree of second subject : ";
			cin>>get_data;
		    if(get_data==100)
		    {
		    	stringstream ss;
		        ss<<get_data;
		        ss>>add_data;
		        data=data+add_data;
		    }
		    else if(get_data<100&&get_data>=10)
		    {
		    	stringstream ss;
		        ss<<get_data;
		        ss>>add_data;
		        data=data+"0"+add_data;
			}
			else if(get_data<10&&get_data>=0)
			{
			    stringstream ss;
		        ss<<get_data;
		        ss>>add_data;
		        data=data+"00"+add_data;	
			}
			else
			{
				cout<<"ERROR!! Degree must be from 0 to 100"<<endl<<endl;
				goto again4;
			}
			again5:
		    cout<<"Enter the degree of third subject : ";
		    cin>>get_data;
		    if(get_data==100)
		    {
		    	stringstream ss;
		        ss<<get_data;
		        ss>>add_data;
		        data=data+add_data;
		    }
		    else if(get_data<100&&get_data>=10)
		    {
		    	stringstream ss;
		        ss<<get_data;
		        ss>>add_data;
		        data=data+"0"+add_data;
			}
			else if(get_data<10&&get_data>=0)
			{
			    stringstream ss;
		        ss<<get_data;
		        ss>>add_data;
		        data=data+"00"+add_data;	
			}
			else
			{
				cout<<"ERROR!! Degree must be from 0 to 100"<<endl<<endl;
				goto again5;
			}
		}
		else
		{
			cout<<"ERROR!! Enter 1 or 2"<<endl<<endl;
			goto again2;
		}
		
	}
	else
	{
	cout<<"ERROR!! The ID must contain 5 numbers"<<endl<<endl;
	goto again1;
	}
	again6:
	cout<<"Do you want to add another student data ? 1.yes 2.no ... Choose by entering 1 or 2 : ";
	cin>>get_data;
	if(get_data==1)
	{
		cout<<endl<<endl;
		goto another_one;
	}
	else if(get_data==2)
	{
		while(i<n)
		{
			cout<<endl<<endl<<endl;
			cout<<"The student number : "<<i+1<<endl;
			cout<<"ID : "<<data[0+15*i]<<data[1+15*i]<<data[2+15*i]<<data[3+15*i]<<data[4+15*i]<<endl;
			if(data[5+15*i]=='1')
			{
				cout<<"Gender : Boy"<<endl;
			}
			else
			{
				cout<<"Gender : Girl"<<endl;
			}
			cout<<"Degree of first subject : "<<data[6+15*i]<<data[7+15*i]<<data[8+15*i]<<endl;
			cout<<"Degree of second subject : "<<data[9+15*i]<<data[10+15*i]<<data[11+15*i]<<endl;
			cout<<"Degree of third subject : "<<data[12+15*i]<<data[13+15*i]<<data[14+15*i]<<endl;
			i=i+1;
		}
	}
	else
	{
		cout<<"ERROR!! Enter 1 or 2"<<endl<<endl;
		goto again6;
	}
}
