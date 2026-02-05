//race.h

#ifndef RACE_H_EXISTS
#define HORSE_H_EXISTS

#include "horse.h"

class Race {
	private:
		const int TRACK_LENGTH = 15;
		const int static NUM_HORSES = 5;
		int horses[NUM_HORSES] = {0, 0, 0, 0, 0};
	public:
		Race();
		void advance();
};

#endif
