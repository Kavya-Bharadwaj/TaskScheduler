Main.exe:taskParser.o Main.o
	g++ taskParser.o Main.o -o Main.exe
	rm *.o
Main.o:
	g++ -c Main.cpp -o Main.o
taskParser.o:
	g++ -c taskParser.cpp -o taskParser.o
