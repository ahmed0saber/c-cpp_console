#include <iostream> 
#include <windows.h>
#include <time.h>
#include <conio.h>
using namespace std;
int main() 
{ 
int j=0;
	for (int a=3; a>0 ; a--)
	{
		cout<<"\rGet ready to play in : "<<a;
    	Beep(2000,300);Beep(0,700);
	}
    Beep(0,500);
		cout << "\n( YOU HAVE ONLY 5 SECONDS TO SOLVE EACH QUESTION )\n-----------------------------------------------------------------------\n\n";
		Beep(0,4000);
		for ( int i=1; i<=5; i++)
		{
			srand(time(0));
			int A = rand()%10+1+10*(i-1);
			int B = rand()%10+1+10*(i-1);
			cout << " Question " << i << " :     " << A << " + " << B << " = ";
			int numInput;
    		time_t start = time(0);
    		while ( !kbhit() )
    		{
        		if (abs(time(0) - start) > 5)
				{
					j=1;
					break;
				}
    		}
    		if (j==1)
			{
				cout << " Time's Up!!";
				j=2;
 			}
			 else
			{
 				cin >> numInput;
				if ((time(0)-start)>5)
				{
					cout << " Time's Up!!";
					j=2;
				}
    			else if ( numInput == A+B ) cout << " Good Job!!\n\n";
    			else
				{
					cout << " Wrong Answer!!";
					j=2;
				}
			}
			if (j==2) break;
		}
}
