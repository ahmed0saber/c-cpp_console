#include <iostream>
#include <fstream>
using namespace std;

struct student
{
    string id ;
    float grade1 , grade2 , grade3 , grade4 , grade5 ;
} s[10];

int main()
{
	string _input ;
	bool found=false;
	 // storing information
    for(int i = 0; i < 10; ++i)
    {
        cout << "Student " <<i+1<< "," << endl;

        cout << "Enter id : ";
        cin >> s[i].id;

        cout << "Enter grade1 : ";
        cin >> s[i].grade1;
        
        cout << "Enter grade2 : ";
        cin >> s[i].grade2;
        
        cout << "Enter grade3 : ";
        cin >> s[i].grade3;
        
        cout << "Enter grade4 : ";
        cin >> s[i].grade4;
        
        cout << "Enter grade5 : ";
        cin >> s[i].grade5;

        cout << endl;
    }
	
	cout<<"Enter the id of the student : ";
	cin>>_input ;
	
	for(int i = 0; i < 10; ++i)
    {
        if(s[i].id==_input)
        {
        	found=true;
        	ofstream MyFile("StudentFile.txt");

		  MyFile<<s[i].id<<endl<<s[i].grade1<<endl<<s[i].grade2<<endl<<s[i].grade3<<endl<<s[i].grade4<<endl<<s[i].grade5;

		  MyFile.close();
        }
    }
    if(found=true)
    {cout<<"Found";}
    else{cout<<"Not Found";}
}
