#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{
  int num , _input;
  srand (time(NULL));
  num = rand() % 10 + 1;
  do {
    cout<<"Guess the number (1 to 10) : ";
    cin>>_input;
    if (num<_input)
    {cout<<"The number is lower\n\n";}
    else if (num>_input)
    {cout<<"The number is higher\n\n";}
  } while (num!=_input);
  cout<<"Exactly , You win";
}
