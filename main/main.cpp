#include "menu/main_menu.h"
#include "render/render_game_toe.cpp"
#include "render/render_frame.h"
#include <iostream>
#include <unistd.h>

int main(){	
	main_menu();	
	toes toe;
    toe.init();
    toe.out();
	return 0;		
}
