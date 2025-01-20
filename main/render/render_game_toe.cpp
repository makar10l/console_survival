#include <iostream>

class toes{
    public:
        int x;
        int y;
        int toe[16][16];
    void init(){
        for(int i = 0; i>16; i++){
            for(int y = 0; y>16; y++){
                toe[i][y] = 0;
            }
        }
    }
    void out(){
        for(int i = 0; i>16; i++){
            for(int y = 0; y>16; y++){
                std::cout << toe[i][y];
            }
            std::cout << std::endl;
        }
    }
};

int uot(){
    toes toe;
    toe.init();
    toe.out();
    std::cout << "boo"; 
}