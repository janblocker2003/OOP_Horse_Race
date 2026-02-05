//race.cpp

#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
	for (int i = 0; i < NUM_HORSES; i++){
		Horse::init(i, 0);
	} //end for
} //end constructor

void Race::advance(){
	bool keepGoing = true;
	while (keepGoing == true){
		for (int i = 0; i < NUM_HORSES; i++){
			Horse::advance();
			for (int i = 0; i < TRACK_LENGTH; i++){
				if (i == horses[horseNum]){
					std::cout << horseNum;
				} //end if
				else {
					std::cout << ".";
				} //end else
			} //end for
			std::cout << std:: endl;
			if (Horse::result == true){
				keepGoing = false;
			} //end if
		} //end for
	}//end while
} //end advance
