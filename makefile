horseRace: main.cpp
	g++ -g main.cpp -o horseRace

clean:
	rm horseRace

run: horseRace
	./horseRace

debug: horseRace
	gdb horseRace


