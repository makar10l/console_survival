#include "menu/main_menu.h"
#include "render/render_game_toe.h"
#include "render/render_frame.h"
#include <iostream>
#include <unistd.h>


char* toe[10][10];

int main(){	
	int isRun = main_menu();
	if(isRun == 1){
		return 1;
	}
    else{	
		render();
	}
	return 0;		
}
