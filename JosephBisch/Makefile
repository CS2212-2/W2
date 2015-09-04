CC=gcc
PROG=p5

OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))
HEADERS = $(wildcard *.h)

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $<

$(PROG): $(OBJECTS)
	$(CC) -o $@ $^

clean:
	rm -f $(PROG) $(OBJECTS)
