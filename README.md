# OOP HorseRace documentation

## UML diagram
```mermaid
classDiagram
direction TB
    class Horse {
	    - const int NUM_HORSES
	    - const int TRACK_LENGTH
	    - horses[NUM_HORSES]
	    - bool keepGoing
	    - bool horseWon
	    - int coin
      + Horse()
      + getCoin() : int
	    + advance(int HorseNum, int* horses)
      + printLane(int HorseNum, int* horses)
      + isWinner(int horseNum, int* horses) : bool
    }

    class Race {
	    - int TRACK_LENGTH
	    - int NUM_HORSES
	    - Horse horses[NUM_HORSES]
	    + Race()
	    + void start()
    }

    Race ..> Horse
```

#Got this far and realised I don't think this is right. Wouldn't there need to be getters and setters for those attributes? I feel like maybe some of them shouldn't be there. 
