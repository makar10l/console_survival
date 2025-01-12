#include <iostream>
void render(){
	std::cout << "\x1b[1J\x1b[H";
	for(int y = 0; y < 10; y++){
				if(y == 0 || y == 9){
					for(int x = 0; x < 10; x++){		
					std::cout << "⚫";
				}
				}
				else{
					for(int x = 0; x < 10; x++){
						if(x == 0 || x == 9){std::cout << "⚫";}
						else{std::cout << "  ";}				
					}
				}
				
				std::cout << "\n";
			}
}