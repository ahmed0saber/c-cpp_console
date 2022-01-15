#include <iostream>
#include <vector>
using namespace std ;
int main()
{
	int n,i,n_p,n_n,total=0;
	float av;
	vector<int>n1;
	cout<<"Enter integers , The input ends if it is 0 : ";
	cin>>n;
	if (n==0)
	{
		cout<<"You haven't entered any number just 0";
	}
	else
	{
		for(i=0;n!=0;i++)
    	{
    		n1.push_back(n);
	    	cin>>n;
    	}
    	for (auto i = n1.begin(); i != n1.end(); ++i) 
    	{
	    	if (*i>0)
    		{
		    	n_p++;
    		}
    		else if (*i<0)
    		{
		    	n_n++;
	    	}
    		total=total+*i;
    	}
    	av=(float)total/i;
    	cout<<"Number of positive integers : "<<n_p<<endl<<"Number of negative integers : "<<n_n<<endl<<"Total : "<<total<<endl<<"Average : "<<av;
	}
}
