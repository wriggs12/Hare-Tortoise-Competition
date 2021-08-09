CC = g++

all: run

run: RunCompetition.o Competition.o Hare.o Tortoise.o Road.o
        $(CC) -o run RunCompetition.o Competition.o Hare.o Tortoise.o Road.o

RunCompetition.o: RunCompetition.cpp
        $(CC) -c RunCompetition.cpp

Competition.o: Competition.cpp
        $(CC) -c Competition.cpp

Hare.o: Hare.cpp
        $(CC) -c Hare.cpp

Tortoise.o: Tortoise.cpp
        $(CC) -c Tortoise.cpp

Road.o: Road.cpp
        $(CC) -c Road.cpp

clean:
        $(RM) run *.o *~