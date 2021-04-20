CC=g++
OUTFILE=main
RUN=./main
ALL=main clean run
Main=main.o

all: $(ALL)

main: $(Main)
	$(CC) -o $(OUTFILE) $(Main)

main.o: main.cpp
	$(CC) -c main.cpp
	
clean:
	rm *.o

run:
	$(RUN)