#include <iostream>
using namespace std;
int main()
{
	int counter=0;
string _string="My name is Ahmed Saber" , temp="" , _array[10];
for(int i=0;i<_string.length();i++)
{
if(_string[i]==' ')
{
_array[counter]=temp;
temp="";
counter++;
}
else{
temp+=_string[i];
}
}
for(int i=0;i<10;i++)
{
	cout<<_array[i]<<endl;
}
}
