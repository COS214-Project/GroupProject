output: main.o FridayMorningPractice.o FridayAfternoonPractice.o SaturdayPractice.o PracticeState.o RaceTrack.o Qualifier.o Memento.o TimeKeeper.o RaceHandler.o Racing.o Positioning.o PointAssigning.o Car.o
	g++ main.o FridayMorningPractice.o FridayAfternoonPractice.o SaturdayPractice.o PracticeState.o RaceTrack.o Qualifier.o Memento.o TimeKeeper.o RaceHandler.o Racing.o Positioning.o PointAssigning.o Car.o -o output

main.o: main.cpp
	g++ -c main.cpp

FridayMorningPractice.o: FridayMorningPractice.cpp
	g++ -c FridayMorningPractice.cpp

FridayAfternoonPractice.o: FridayAfternoonPractice.cpp
	g++ -c FridayAfternoonPractice.cpp

SaturdayPractice.o: SaturdayPractice.cpp
	g++ -c SaturdayPractice.cpp

PracticeState.o: PracticeState.cpp
	g++ -c PracticeState.cpp

RaceTrack.o: RaceTrack.cpp
	g++ -c RaceTrack.cpp

Qualifier.o: Qualifier.cpp
	g++ -c Qualifier.cpp

Memento.o: Memento.cpp
	g++ -c Memento.cpp

TimeKeeper.o: TimeKeeper.cpp
	g++ -c TimeKeeper.cpp

RaceHandler.o: RaceHandler.cpp
	g++ -c RaceHandler.cpp

Racing.o: Racing.cpp
	g++ -c Racing.cpp

Positioning.o: Positioning.cpp
	g++ -c Positioning.cpp

PointAssigning.o: PointAssigning.cpp
	g++ -c PointAssigning.cpp

Car.o: Car.cpp
	g++ -c Car.cpp

clean:
	rm *.o output

run:
	./output