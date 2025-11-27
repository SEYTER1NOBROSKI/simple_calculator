CC = gcc
LIBS = -lm

TARGET = calculator

all: $(TARGET)

diff.o: diff.c
	$(CC) -c diff.c

factorial.o: factorial.c
	$(CC) -c factorial.c

fraction.o: fraction.c
	$(CC) -c fraction.c

product.o: product.c
	$(CC) -c product.c

sqrt.o: sqrt.c
	$(CC) -c sqrt.c

sum.o: sum.c
	$(CC) -c sum.c

libcalc.a: diff.o factorial.o fraction.o product.o sqrt.o sum.o
	ar rcs libcalc.a *.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# -L. вказує шукати бібліотеки у поточній папці
# -lcalc вказує підключити файл libcalc.a (префікс lib і суфікс .a опускаються)
$(TARGET): main.o libcalc.a
	$(CC) main.o -L. -lcalc $(LIBS) -o $(TARGET)

clean:
	rm -f *.o *.a $(TARGET)