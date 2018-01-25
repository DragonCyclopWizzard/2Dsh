CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++0x

__start__: 2Dsh
	./2Dsh

2Dsh: obj obj/main.o obj/Animation.o obj/Collision.o obj/Graphical_Object.o
	g++ obj/main.o obj/Animation.o obj/Collision.o obj/Graphical_Object.o -o 2Dsh  -lsfml-graphics -lsfml-window -lsfml-system

obj:
	mkdir obj/

obj/main.o: src/main.cpp inc/Animation.hh inc/Collision.hh inc/Graphical_Object.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Animation.o: src/Animation.cpp inc/Animation.hh
	g++ -c ${CXXFLAGS} -o obj/Animation.o src/Animation.cpp

obj/Collision.o: src/Collision.cpp inc/Collision.hh
	g++ -c ${CXXFLAGS} -o obj/Collision.o src/Collision.cpp

obj/Graphical_Object.o: src/Graphical_Object.cpp inc/Graphical_Object.hh
	g++ -c ${CXXFLAGS} -o obj/Graphical_Object.o src/Graphical_Object.cpp

clean:
	rm -rf obj/*.o src/*~ inc/*~ *~ obj 2Dsh
