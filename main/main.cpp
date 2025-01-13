#include "menu/main_menu.h"
#include "render_game_toe.cpp"
#include "render_frame.cpp"
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
	 	char* toe = render_game_toe();
		std::cout << toe[0][0];
	}
	return 0;		
}
