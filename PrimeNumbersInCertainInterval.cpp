#include <iostream>
using namespace std;
int main()
{
int n1,n2, constant=1;
cout<<" please enter the first number"<<endl;
cin>>n1;
cout<<" please enter the seconde number"<<endl;
cin>>n2;
cout<<"********************"<<endl;
for(int i=n1 ; i<=n2 ; i++)
{
for(int x=2 ; x<i ; x++)
{
if ( i % x == 0){
constant++;}
}
if ( constant ==1){
cout<<i<<endl;}
constant=1;
}
}
