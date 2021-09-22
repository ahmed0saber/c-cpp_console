#include <iostream>
using namespace std;
int main()
{
	string current,past="",next;
	int undo_redo;
	cout<<"Enter a text"<<endl;
	cin>>current;
	next=current;
	again:
	cout<<"The current text : "<<current<<endl<<endl;
	cout<<endl<<"If you want to undo , enter 0 ... don't want , Enter 1 ... want to redo , Enter 2 ... want to enter a new text , Enter 3"<<endl;
	cin>>undo_redo;
	if(undo_redo==0)
	{
		next=current;
		current=past;
	}
	else if(undo_redo==2)
	{
		past=current;
		current=next;
	}
	else if(undo_redo==3)
	{
		past=current;
		cout<<"Enter the new text"<<endl;
		cin>>current;
		next=current;
	}
	goto again;
}
