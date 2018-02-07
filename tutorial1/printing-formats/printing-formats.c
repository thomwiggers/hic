#include <stdio.h>

/* 
 * Printing an integer n different formats 
 *
 * Author: probably Peter Schwabe
 * From https://www.cs.ru.nl/E.Poll/hacking/
 *
 * See also man 3 printf
 */

int main( ) {
    int j = 15;
    printf("The value of j is %i \n", j);
    printf("In octal notation: %o \n", j);
    printf("In hexadecimal notation: %x \n", j);
    printf("Idem with capitals: %X \n", j);
}
