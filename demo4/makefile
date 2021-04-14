all: main clean

clean:
	rm *.o -rf
	
main: demo4.o tools.o
	g++ -o main demo4.o tools.o

demo4.o: demo4.cpp
	g++ -c demo4.cpp

tools.o: ./tools/tools.cpp
	g++ -c ./tools/tools.cpp