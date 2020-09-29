#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

extern char map[18][32];
extern char tmp_map[18][32];




		class walk 
{   
    public:
	short walk_count;
	short x;
	short y;
	short back;
};	

extern vector< walk > path;
extern vector< walk > arr ;

class level
{
	
		
	public :
	
						   void showmap()
					{
						
						for(int i=0;i<18;i++)
						   {
						   	cout<<map[i]<<endl;
					}
					
					}
 
             
                void nextlevel()
                {
                	
                	
                 strcpy(map[0] , "+#############################+" );    	
                 strcpy(map[1] , "|     ####################### |" );
				 strcpy(map[2] , "|      ...................... |" );
				 strcpy(map[3] , "| . |     ################### |" );
				 strcpy(map[4] , "| . |                         |" );
				 strcpy(map[5] , "|.  |          ######|.|      |" );
				 strcpy(map[6] , "|.  | .............. |.|      |" );
				 strcpy(map[7] , "|###| ###############|.|      |" );
				 strcpy(map[8] , "|...                 |.|      |" );
				 strcpy(map[9] , "|#############        #####   |" );
				 strcpy(map[10] ,"|          .................. |" );
				 strcpy(map[11] ,"|.....   | ###################|" );
				 strcpy(map[12] ,"|########|                    |" );
				 strcpy(map[13] ,"|        |                    |" );
				 strcpy(map[14] ,"|                             |" );
				 strcpy(map[15] ,"|                             |" );
				 strcpy(map[16] ,"|                             |" );
				 strcpy(map[17] ,"+#############################+" );          	
                	
                	
                	
                	 
					
                	
                	
				}
				
				
				
		
};
