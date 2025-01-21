#include <iostream>
#include "class_toe.h"
toes render(toes toe){
    system("clear");
    std::cout << "⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛" << std::endl;
    for(int  y = 0; y<8; y++){
        std::cout << "⬛";
        for(int x = 0; x<16; x++){
            std::cout << toe.toe[y][x];
        }
        std::cout << "⬛" << std::endl;
    }
    std::cout << "⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛" << std::endl;
}