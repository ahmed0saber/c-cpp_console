#include <iostream>
#include <thread>
#include <conio.h>
using namespace std;

/*declaring a global boolean variable to be used inside and outside main*/
bool working=true;

/*creating a function to be performed by a thread*/
void _function(int num)
{
	while(working)
	{
		cout<<num<<endl;
		num++;
		this_thread::sleep_for(0.5s);
	}
}

int main()
{
	char _input;
	int n=0;
	/*creating threads to work indepentently to main*/
	thread performer(_function,n);
	thread performer2(_function,100);
	/*a loop to stop the thread when user input a certain character*/
	while(true)
	{
		/*one character input*/
		_input=getch();
		
		if(_input=='q')
		{
			working=false;
			break;
		}
	}
	performer.join();
	performer2.join();
	getch();
}
