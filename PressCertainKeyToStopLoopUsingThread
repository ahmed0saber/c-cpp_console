#include <iostream>
#include <thread>
#include <conio.h>
using namespace std;

/*declaring a global boolean variable to be used inside and outside main*/
bool working=true;

/*creating a function to be performed by a thread*/
void _function()
{
	while(working)
	{
		cout<<"Hello\n";
		this_thread::sleep_for(1s);
	}
}

int main()
{
	char _input;
	
	/*creating a thread to work indepentently to main*/
	thread performer(_function);
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
	getch();
}
