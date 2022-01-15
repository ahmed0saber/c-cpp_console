Put the following code inside a file called something.hpp

#ifndef my_header
#define my_header
#include <iostream>
using namespace std;
square(int a)
{
	cout<<a*a;
}
#endif



Put the following code inside a cpp file

#include "something.hpp"
int main()
{
	square(5);
}



Make sure both the files are together in the same folder
