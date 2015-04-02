all:
	g++ -Wall Fraction.h Fraction.cpp Lab6.cpp -o Lab6.out
run:
	./Lab6.out 3 4
clean:
	rm -rf *.o *~ *#
