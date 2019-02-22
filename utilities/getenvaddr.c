#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#ifdef PRINT_BYTES
#include "functions.h"
#endif

int main(int argc, char* argv[]) {
    char *ptr;

    if (argc < 3) {
        printf("Usage: %s <environment var> <target program path>\n", argv[0]);
        exit(1);
    }

    ptr = getenv(argv[1]);
    if (ptr == NULL) {
        fprintf(stderr, "Environment variable '%s' not found!", argv[1]);
        exit(2);
    }

    // Correct address for difference in paths/names of executables
    ptr += (strlen(argv[0]) - strlen(argv[2]))*2;

    // we print to stderr to not interfere with the address output
    fprintf(stderr, "%s will be at %p\n", argv[1], ptr);

#ifdef PRINT_BYTES
    print_address_little_endian((uintptr_t) ptr);
#endif
}
