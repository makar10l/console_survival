#include "menu/main_menu.cpp"
#include "render/render.cpp"
#include <iostream>
#include <unistd.h>

int toe[10][10];

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
