#include <iostream>

class toes{
    public:
        int x = 0;
        int y = 0;
        int toe[8][16];
        void init(){
            for(int y = 0; y<8; y++){
                for(int x = 0; x<16; x++){
                    toe[y][x] = 0;
                }
            }
        }
};

