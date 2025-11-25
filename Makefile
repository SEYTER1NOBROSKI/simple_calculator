CC = gcc
LIBS = -lm

TARGET = calculator

all: $(TARGET)

calc_func.o: calc_func.c calc_func.h
	$(CC) -c calc_func.c

libcalc.a: calc_func.o
	ar rcs libcalc.a calc_func.o

main.o: main.c calc_func.h
	$(CC) $(CFLAGS) -c main.c

# -L. вказує шукати бібліотеки у поточній папці
# -lcalc вказує підключити файл libcalc.a (префікс lib і суфікс .a опускаються)
$(TARGET): main.o libcalc.a
	$(CC) main.o -L. -lcalc $(LIBS) -o $(TARGET)

clean:
	rm -f *.o *.a $(TARGET)