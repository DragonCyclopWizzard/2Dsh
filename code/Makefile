CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++0x

__start__: 2Dsh
	./2Dsh

2Dsh: obj obj/main.o obj/Animation.o obj/Background.o obj/Start_Menu.o obj/Collision.o obj/Graphical_Object.o obj/Player_Character.o
	g++ obj/main.o obj/Animation.o obj/Background.o obj/Start_Menu.o obj/Collision.o obj/Graphical_Object.o obj/Player_Character.o -o 2Dsh  -lsfml-graphics -lsfml-window -lsfml-system

obj:
	mkdir obj/

obj/main.o: src/main.cpp inc/Animation.hh inc/Background.hh inc/Start_Menu.hh inc/Collision.hh inc/Graphical_Object.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Animation.o: src/Animation.cpp inc/Animation.hh
	g++ -c ${CXXFLAGS} -o obj/Animation.o src/Animation.cpp

obj/Background.o: src/Background.cpp inc/Background.hh
	g++ -c ${CXXFLAGS} -o obj/Background.o src/Background.cpp

obj/Start_Menu.o: src/Start_Menu.cpp inc/Start_Menu.hh
	g++ -c ${CXXFLAGS} -o obj/Start_Menu.o src/Start_Menu.cpp

obj/Collision.o: src/Collision.cpp inc/Collision.hh
	g++ -c ${CXXFLAGS} -o obj/Collision.o src/Collision.cpp

obj/Graphical_Object.o: src/Graphical_Object.cpp inc/Graphical_Object.hh
	g++ -c ${CXXFLAGS} -o obj/Graphical_Object.o src/Graphical_Object.cpp

obj/Player_Character.o:	src/Player_Character.cpp inc/Player_Character.hh
	g++ -c ${CXXFLAGS} -o obj/Player_Character.o src/Player_Character.cpp

clean:
	rm -rf obj/*.o src/*~ inc/*~ *~ obj 2Dsh
