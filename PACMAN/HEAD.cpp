#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <vector>
#include "HEAD.h"
using namespace std;





   	void gotoxy( short x, short y )
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE) ;
    COORD p = { x, y } ;

    SetConsoleCursorPosition( h, p ) ;
}



void AddArray( int ex, int ey, int wc , int back ){
	if( tmp_map[ey][ex] == ' ' || tmp_map[ey][ex] == '.' )
	{
		tmp_map[ey][ex] = '#';
		walk tmp;
		tmp.x = ex;
		tmp.y = ey;
		tmp.walk_count = wc;
		tmp.back = back;
		arr.push_back( tmp );
	}
}




void enemymove(int ex,int ey,int x,int y)
{
		memcpy( tmp_map, map, sizeof(map) );
	
	arr.clear();
	walk tmp;
	tmp.x = ex;
	tmp.y = ey;
	tmp.walk_count = 0;
	
	arr.push_back( tmp );
	int i=0;
           
           
            while( i < arr.size() )
			
			
		{
		
		if( arr[i].x == x && arr[i].y == y )
		{
			
			path.clear();
			walk tmp2;
			while( arr[i].walk_count != 0 ){
				tmp2.x = arr[i].x;
				tmp2.y = arr[i].y;
				path.push_back( tmp2 );

				i = arr[i].back;
			}

			break;
		}

		AddArray( arr[i].x+1, arr[i].y, arr[i].walk_count+1, i );
		AddArray( arr[i].x-1, arr[i].y, arr[i].walk_count+1, i );
		AddArray( arr[i].x, arr[i].y+1, arr[i].walk_count+1, i );
		AddArray( arr[i].x, arr[i].y-1, arr[i].walk_count+1, i );

	
		i++;
}
}




