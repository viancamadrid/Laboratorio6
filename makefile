lab6:	user.o game.o main.o
	g++ user.o game.o main.o -o lab6

main.o:	main.cpp game.h user.h
	g++ -c main.cpp

user.o:	user.cpp user.h
	g++ -c user.cpp

game.o:	game.cpp game.h
	g++ -c game.cpp

clean:
	rm *.o lab6