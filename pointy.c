//Tim Marder
//Systems Pd04
//Work#02 -- Get to the point
//2018-09-16

#include <stdio.h>
#include <stdlib.h>

int main() {

  unsigned int foo = 3000000000; //declares foo
  char * poo = &foo; //declares poo pointer and points to address of foo

  printf("Value of foo: %u\n", foo);
  printf("foo in hex: %x\n", foo); // Prints hexcode of foo

  printf("\n");
  printf("=====[ Each byte of foo ]=====\n");

  for (int byte = 0 ; byte < 4 ; byte++) { //Prints each byte of foo
    printf("Byte %d: %hhx\n", byte, *poo);
    poo++;
  }

  printf("\n");
  printf("Original decimal value of poo: %u\n", *poo);
  printf("Original hex value of poo: %x\n", *poo);

  printf("\n");
  printf("=====[ Increments of 1 to bytes ]=====\n");

  for (int byte = 0 ; byte < 4 ; byte++) { //increments each byte by 1
    printf("Byte %d: %hhx\n", byte, *poo);
    *poo++;
  }

  printf("\n");
  printf("Decimal value of poo: %u\n", *poo);
  printf("Hex value of poo: %x\n", *poo);


  printf("\n");
  printf("=====[ Increments of 16 to bytes ]=====\n");

  for (int byte = 0 ; byte < 4 ; byte++) { //increments each byte by 16
    printf("Byte %d: %hhx\n", byte, *poo);
    *poo += 16;
  }

  printf("\n");
  printf("Decimal value of poo: %u\n", *poo);
  printf("Hex value of poo: %x\n", *poo);

}
