#include <iostream>
#include <string>
using namespace std;
int main()
{
	string _text = "My  name    is        Ahmed    Saber" , mod_text = "";
	bool space = true;
	for(int i=0;i<_text.length();i++)
	{
		if(_text[i]==' ' && space)
		{
			space=false;
			mod_text+=' ';
		}
		else if(_text[i]==' ' && !space)
		{ }
		else
		{
			mod_text+=_text[i];
			space=true;
		}
	}
	cout<<"Before : "<<_text<<endl;
	cout<<"After : "<<mod_text;
}
