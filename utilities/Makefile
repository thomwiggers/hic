PREFIX=/usr/local

BINARIES = getenvaddr getenvaddr-bytes reverseaddr

CFLAGS = -Wall -Wextra -Wformat=2 -Wpedantic -O2

.PHONY: all
all: $(BINARIES)


getenvaddr: getenvaddr.c

getenvaddr-bytes: getenvaddr.c functions.h functions.o
	$(CC) $(CFLAGS) -o $@ $^ -DPRINT_BYTES

reverseaddr: reverseaddr.c functions.h functions.o

install: getenvaddr getenvaddr-bytes
	$(INSTALL) -m755 --strip getenvaddr getenvaddr-bytes $(PREFIX)/bin

.PHONY: clean
clean:
	$(RM) *.o

.PHONY: dist-clean
dist-clean: clean
	$(RM) $(BINARIES)
