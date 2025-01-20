#include <iostream>

class toes{
    public:
        int x;
        int y;
        int toe[8][16];
    void init(){
        for(int i = 0; i<8; i++){
            for(int y = 0; y<16; y++){
                toe[i][y] = 0;
            }
        }
    }
    void out(){
        for(int i = 0; i<8; i++){
            for(int y = 0; y<16; y++){
                std::cout << toe[i][y];
            }
            std::cout << "\033[1;" + i + "H";
            std::cout << std::endl;
        }
    }
};

