#include <iostream>
#include <unistd.h>
#include "set_cur_pos.cpp"
#include "getch.h"
#include <string>


#define f_line "PLAY"
#define s_line "QUIT"

void sayHello(){
    std::cout << "Control on WASD";
}

int output(){
    while(1){
        int poss;
        int pos = getch();  
        if(pos == 119){
            poss = 0;     
            system("clear");               
            set_pos(50,12);
            std::cout << "<" << f_line << ">" << std::endl << std::endl;;
            set_pos(51,0);
            std::cout << s_line;
        }
        if(pos == 115){
            poss = 1;
            system("clear");
            set_pos(50,12);
            std::cout  << " " << f_line << std::endl << std::endl;
            set_pos(50,0);
            std::cout << "<" << s_line << ">";
        }   
        if(pos == 10 && poss == 0){
            return 0;
        }
        else if(pos == 10 && poss == 1){
            return 1;
        }      
    }
}

int  main_menu(){
     system("clear");
    set_pos(50,12);
    sayHello();
    return output();                
}