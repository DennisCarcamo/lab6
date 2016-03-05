main: main.o Game.o user.o
	g++ main.o game.o user.o -o  Games.exe 
	
	
main.o:	main.cpp Game.h user.h
	g++ -c main.cpp 

game.o:	Game.cpp Game.h
	g++ -c game.cpp 

user.o:	user.cpp user.h
	g++ -c user.cpp 

clean:	
	rm *.o  Games.exe
	clear

execute:
	./Games.exe