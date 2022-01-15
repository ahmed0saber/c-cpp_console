#include <iostream>
using namespace std;
int main()
{
	string play[3][3]={{"1","b2","2"},{"d4","e5","f6"},{"3","h8","i9"}};
	char solved[3][3]={{'1','3','2'},{'2','1','3'},{'3','2','1'}} , choice;
	int loca , n=3 , sol[3][3]={{1,0,1},{0,0,0},{1,0,0}} , l;
	board:
	cout<<"\n\n\n\t\t\t\t----------\n";
	cout<<"\t\t\t\t|"<<play[0][0]<<"|"<<play[0][1]<<"|"<<play[0][2]<<"|\n";
	cout<<"\t\t\t\t----------\n";
	cout<<"\t\t\t\t|"<<play[1][0]<<"|"<<play[1][1]<<"|"<<play[1][2]<<"|\n";
	cout<<"\t\t\t\t----------\n";
	cout<<"\t\t\t\t|"<<play[2][0]<<"|"<<play[2][1]<<"|"<<play[2][2]<<"|\n";
	cout<<"\t\t\t\t----------\n";
	if(n==9)
	{
		cout<<"YOU WIN";
		goto done;
	}
	cout<<"Choose the location (1 to 9) : ";
	cin>>loca;
	if(loca>0&&loca<10)
	{
		cout<<"Enter the value you want to place here (1 to 3) : ";
		cin>>choice;
		if(choice=='1'||choice=='2'||choice=='3')
		{
			if(loca>0&&loca<4)
		    {
		    	l=0;
	    	}
		    else if(loca>3&&loca<7)
		    {
		    	l=1;
		    }
		    else if(loca>6&&loca<10)
		    {
		    	l=2;
		    }
		    if(choice==solved[l][loca-1-(l*3)])
			{
			    if(sol[l][loca-1-(l*3)]==0)
			    {
				    play[l][loca-1-(l*3)]=solved[l][loca-1-(l*3)];
				    sol[l][loca-1-(l*3)]=1;
				    n=n+1;
			    }
			    else
			    {
			    	cout<<"ERROR , Repeated move\n";
			    	goto board;
				}
		    }
			else
			{
			        cout<<"WRONG move , Try again\n";
			        goto board;
		    }
		}
		else
		{
			cout<<"ERROR , Enter 1 , 2 or 3\n";
			goto board;
		}
	}
	else
	{
		cout<<"ERROR , Enter a character from 1 to 9\n";
		goto board;
	}
	goto board;
	done:
	return 0;
}
