#include <stdio.h>
#include <stdbool.h> // for bool

/* Code sample to demo you can write completely ridiculous C code.
 *
 * Should this even be considered legal C code?
 *
 * Source: https://www.cs.ru.nl/E.Poll/hacking/
 */

void check(bool b) { 
  if (b) { 
    printf("Yes\n");
  } else {
    printf("No\n"); }
}

int main( ) {
  printf("true:         ");   check(true);
  printf("false:        ");   check(false);
  printf("44:           ");   check(44);
  printf("0:            ");   check(0);
  printf("1.3:          ");   check(1.3);
  printf("1.0:          ");   check(1.0);
  printf("5/12:         ");   check(5/12);
  printf("\"false\":      "); check("false");
  printf("check(check): ");   check(check); 
 /* */

  return(0);
}
