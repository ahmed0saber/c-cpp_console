#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char move;
	int map[3][3]={{0,0,0},{0,1,0},{0,0,0}},x=1,y=1;
	cout<<"\t\t\tUse the arrows to move\n\n";
	while(true)
	{
		cout<<"\t\t\t\t|"<<map[0][0]<<"|"<<map[0][1]<<"|"<<map[0][2]<<"|\n\t\t\t\t|"<<map[1][0]<<"|"<<map[1][1]<<"|"<<map[1][2]<<"|\n\t\t\t\t|"<<map[2][0]<<"|"<<map[2][1]<<"|"<<map[2][2]<<"|\n\n\n\n\n\n";
	    move=getch();
	    map[x][y]=0;
	    if(move==72&&x>0)
	    {x--;}
    	if(move==80&&x<2)
    	{x++;}
    	if(move==75&&y>0)
    	{y--;}
    	if(move==77&&y<2)
    	{y++;}
    	map[x][y]=1;
    }
}
