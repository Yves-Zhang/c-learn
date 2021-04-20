CC=g++
OUTFILE=main
RUN=./main
ALL=main clean run
Main=main.o plusFuc.o
# Main=demo5.o person.o student.o

all: $(ALL)

main: $(Main)
	$(CC) -o $(OUTFILE) $(Main)

main.o: main.cpp
	$(CC) -c main.cpp

plusFuc.o: ./plusFuc/plusFuc.cpp
	$(CC) -c ./plusFuc/plusFuc.cpp

clean:
	rm *.o

run:
	$(RUN)