#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <vector>
#include "HEAD.h"
using namespace std;

void gotoxy( short x, short y );
void AddArray( int ex, int ey, int wc , int back );
void enemymove(int ex,int ey,int x,int y);

char tmp_map[18][32];

char map[18][32] = {
	"+#############################+",  
	"|                             |",
	"|  .....                      |",
	"|## ########### ##   #########|",
	"|   |         ..........  .   |",
	"|.| |### | .|           | .   |",
	"|.|      |. | |###  |   | .|  |",
	"|.| #####| .| | .    ## | .   |",
	"|.|        .  |###  |     .|  |",
	"|.|##### ###         ##       |",
	"|          ######  ####### ###|",
	"| .......             ......  |",
	"|# ### ####      ###   #######|",
	"|                             |",
	"|                             |",
	"|                             |",
	"|                             |",
	"+#############################+"
	};
	
	
	

vector< walk > path;
vector< walk > arr ;




 	
int main()
{
	level change;
	int t1=0,seeder=0,over=0;
	
	int x=15,y=16,pts=0,frame=0;
    int ex=3,ey=5;	
    char choice;
    int difficulty;
    
    cout<<"PRESS 'E' FOR EASY MODE "<<endl;
    cout<<"PRESS 'H' FOR HARD MODE "<<endl;
    cout<<"PRESS 'U'  FOR ULTRA MODE"<<endl;
    do{
	cin>>choice;
      }while(choice!='E'&&choice!='H'&&choice!='U');
      
    if(choice=='H')
    {
    	difficulty=2;
	}
    else
	{
	
	 if (choice=='U')
	  {
	  	difficulty=1;
	  }
	
	    else difficulty=4;
    
	}
	
     system("cls"); 
	change.showmap();
	gotoxy( x, y );
	cout << "^";
	gotoxy( ex, ey );
	 cout << "$";
	
	
	while(true)
	{
		change.showmap();
		gotoxy( x, y ); cout << " ";
		
			if (GetAsyncKeyState( VK_UP ) ){
			if( map[y-1][x] == '.' )
			{
			
			map[y-1][x] = ' '; 
			y--; pts++; 
			
			
			} 
			
			
			else
			if( map[y-1][x] == ' ' ) y--;
		}
		if ( GetAsyncKeyState( VK_DOWN ) )
		{
			if( map[y+1][x] == '.' )
			{ 
			  map[y+1][x] = ' ';
			  y++; pts++; 
			  
			} 
			else
			if( map[y+1][x] == ' ' ) y++;
		}
		if ( GetAsyncKeyState( VK_LEFT ) )
		{
			if( map[y][x-1] == '.' )
			{ 
			  map[y][x-1] = ' ';
			  x--; pts++;
			  
			  
			} 
			
			else
			if( map[y][x-1] == ' ' ) x--;
		}
		if ( GetAsyncKeyState( VK_RIGHT ) )
		{
			if( map[y][x+1] == '.' )
			{ 
			  map[y][x+1] = ' ';
			  x++; pts++; 
			  
			
			} 
			
			else
			if( map[y][x+1] == ' ' ) x++;
		}
		
			
			 gotoxy( x,y); cout << "^";
			
		if(frame%difficulty==0)
		{
				
	       gotoxy( ex, ey ); cout << " ";			
	
	       enemymove(ex,ey,x,y);
	       if(path.size() != 0)
	       {
		   
	       ex=path.back().x;
	       ey=path.back().y;

           }
           
           gotoxy( ex,ey ); cout << "$";
		   if(ex==x&&ey==y)
		   {
		   	over=1;
		   	break;
		   }
		  	
      
           if(pts==43)
           {
           	pts++;
           	x=15;
           	y=16;
           	ex=3;
			ey=5;
           	system("cls");
           	 
           	
           	cout<<endl<<endl<<"***********LEVEL COMPLETED***********"<<endl;
           	getchar();
           	change.nextlevel();
           	
           	system("cls");
           	
           	
           	
		   }
		   
		   
		   if(pts==70+43+1)
		   {
		   	system("cls");
           	seeder=1;
           	break;
           	cout<<endl<<endl<<endl;
		   }
	  
	   }
      
	  
	  frame++;
      
      gotoxy( ex, ey ); cout << "$";
      
      
      
          
		Sleep( 80 );
		system("cls");
	}
	
	gotoxy (19,33);
	cout<<endl;
	if(over==1)
	{
		cout<<"********************GAME  OVER************"<<endl;
	}
	if(seeder==1)
	{
	
	cout<<"*************************** THE   END  ************************"<<endl<<endl;
	cout<<"*************************** The ROCKSTAR PRESENTS  ************************"<<endl<<endl;
	cout<<"*************************** SPONCERED BY UBISOFT  ************************"<<endl;
	cout<<endl;
    }
    
    cout<<endl;
    cout<<"******************YOUR POINTS ARE   "<<pts<<endl<<endl;
    
}
 
