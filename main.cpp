#include <iostream>
#include "horse.h"
#include "race.h"

void testHorse();

int main(){
	for (int i = 0; i < Race::NUM_HORSES; i++){
		i.init(1, 15);
		bool keepGoing = true;
		Horse temp;
		temp.init(i, 0);
		while (keepGoing){
			temp.advance();
			temp.printLane();
        		std::cout << "Press enter for another turn" << std::endl;
                		std::cin.ignore();
			if (temp.isWinner()){
				keepGoing = false;
				std::cout << "Horse " << temp.index << " is the winner!! " << std::endl;

			} //end if
		} //end while
	} //end for
return 0;
} //end main
