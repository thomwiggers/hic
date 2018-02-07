#include <stdio.h>
#include <stdlib.h>

#include "extern.h"

void my_awesome_function() {
    puts("This is from the external file!!");
    puts("euh, not much functionality here at the moment");

    puts("...");
    puts("I guess I should do something interesting");
    system("fortune | cowsay");
}
