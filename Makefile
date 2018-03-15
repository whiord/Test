test: test.c
	gcc -o test test.c

clean:
	rm -f test

all: test

.PHONY: clean all
