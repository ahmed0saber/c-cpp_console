#include <iostream>
#include <string>
using namespace std;
int main()
{
	char a[20];
	char b[] = "Hello";
	
	#ifdef _MSC_VER
	#pragma warning(push)
	#pragma warning(disable : 4996)
	#endif
    strcpy(a,b);
	#ifdef _MSC_VER
	#pragma warning(pop)
	#endif
	
	cout<<a;
}
