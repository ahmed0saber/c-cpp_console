#include <iostream>
#include <fstream>
using namespace std;
int main() {
  string name , msg;
  
  //get data from file
  ifstream ifs("aaa.txt");
  string content( (istreambuf_iterator<char>(ifs) ),
                       (istreambuf_iterator<char>()    ) );
                       
  //display messages
  for(int i=0;i<content.length();i++)
  {
  	if(content[i]==' ')
  	{
  		cout<<endl;
  	}
  	else
  	{
  		cout<<content[i];
  	}
  }
  
  //enter a new msg
  cout<<"\tName : ";
  cin>>name;
  cout<<"\tDon't use spaces\n\tMessage : ";
  cin>>msg;
  	
  //save it to the file
  ofstream MyFile("aaa.txt");
  MyFile<<(content+name+":"+msg+" ");
  MyFile.close();
}
