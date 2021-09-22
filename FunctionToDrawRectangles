#include <iostream>
using namespace std;

void draw(int x,int y,char p)
{
	string a=" ";
	a+=p;
	a+=" ";
	for(int i=0;i<y;i++)
	{
		if(i==0 || i==y-1)
		{
			for(int j=0;j<x;j++)
	            {
	            	cout<<a;
	            }
		}
		else
		{
	    	for(int j=0;j<x;j++)
        	{
	          	if(j==0 || j==x-1)
          		{
		          	cout<<a;
          		}else{
	          		cout<<"   ";
     	     	}
         	}
		}
		cout<<endl;
	}
}

int main()
{
	draw(10,5,'*');
}
