#include "menu/main_menu.h"
#include "render/render.h"
#include <iostream>
#include <unistd.h>

int main(){	
	main_menu();	
	toes toe;
    toe.init();
    output(toe);
    getch();
	return 0;		
}
