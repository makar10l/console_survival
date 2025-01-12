#include "menu/main_menu.cpp"
#include "render/render.cpp"
#include <iostream>
#include <unistd.h>
int main(){	
	
	int isRun = main_menu();
	render();
	return 0;
}
