
all: main


main: main.o extern.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c extern.h
	$(CC) $(CFLAGS) -c -o $@ $<


.PHONY: clean
clean:
	-rm main 
	-rm *.o
