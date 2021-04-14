CC=g++
OUTFILE=main
RUN=./main
ALL=main clean run
Main=demo5.o person.o student.o

all: $(ALL)

main: $(Main)
	$(CC) -o $(OUTFILE) $(Main)

demo5.o: demo5.cpp
	$(CC) -c demo5.cpp

person.o: ./person/person.cpp
	$(CC) -c ./person/person.cpp

student.o: ./student/student.cpp
	$(CC) -c ./student/student.cpp

clean:
	rm *.o

run:
	$(RUN)