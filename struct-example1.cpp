#include <iostream>
using namespace std;

struct book {
	string name , author;
	double price;
};

int main()
{
	book x1;
	
	cout<<"Enter book Name: ";
	cin>>x1.name;

	cout<<"Enter book author: ";
	cin>>x1.author;

	x1.price = 100;
	
	if (x1.name == "myBook" && x1.author == "Ahmed")
		{cout<<"The book exists and its price is "<<x1.price;}
	else
		{cout<<"A book with these info doesn't exist";}
}
