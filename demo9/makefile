CC=g++
OUTFILE=main
RUN=./main
ALL=main clean run
Main=main.o Sales_item.o

all: $(ALL)

main: $(Main)
	$(CC) -o $(OUTFILE) $(Main)

main.o: main.cpp
	$(CC) -c main.cpp

Sales_item.o: Sales_item.cpp
	$(CC) -c Sales_item.cpp
	
clean:
	rm *.o

run:
	$(RUN)