test2.c: test1.c
	tr '1' '2' < test1.c > test2.c
test3.c: test1.c
	tr '1' '3' < test1.c > test3.c
test1.o: test1.c
	gcc -c test1.c 
test2.o: test2.c
	gcc -c test2.c 
test3.o: test3.c
	gcc -c test3.c 
Complete: test.c test1.o test2.o test3.o
	gcc -o Complete test.c test1.o test2.o test3.o