# Example Makefile for Hacking in C
# Author: Thom Wiggers <t.wiggers@ru.nl>
# 
# Note that Makefile need to be named WITH the capital M.
# It may work as 'makefile' but that's not necessarily reliable.


# Default C flags to pass to the compiler
CFLAGS?=-Wall -Wpedantic

# We want to build the executable hello as follows:
hello: hello.o
	# $(CC) is the variable that will point to the default C compiler
	# Note that this indentation MUST be a *TAB*, and can't be spaces!
	$(CC) $(CFLAGS) -o hello $<

# Generic build instructions to compile all .c files to .o files.
# (This matches the default rule that Make automatically tries to use)
%.o: %.c
	# use -c to compile to .o
	$(CC) $(CFLAGS) -c $^ -o $@

# Handy alias to generate assembly listings of your source code.
%.s: %.c
	$(CC) $(CFLAGS) -S $^ -o $@

# .PHONY marks this target as not resulting in a file
.PHONY: clean
clean:
	# the - here makes sure that failures are ignored.
	-rm -rf hello
	-rm -rf *.o

.PHONY: help
help:
	# The @ here stops Make from printing the echo command,
	# so we don't see "echo x <newline> x", only "x"
	@echo "do 'cat Makefile' to see what's going on"
