#include <stdio.h>
#include <stdlib.h>

unsigned int x = 3211233211;

int change(int a, int v){
  char *b = &v;
  int c=4;
  while(c--){
    *b += a;
    printf("%hhx\n", *b);
    b++;
  }
  printf("Value after adding %d to each byte (in hex): %x\n", a, v);
  printf("Value after adding %d to each byte (in decimal): %ld\n", a, v);
  return 0;
}

int main(){
  printf("before hex: %x\n", x);
  printf("before  decimal: %ld\n", x);
  change(0, x);
  change(1, x);
  change(16, x);
  return 0;
}
