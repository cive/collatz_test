#include"collatz.h"
#include<stdio.h>
Collatz::Collatz(unsigned int num) : init_num(num) {
  if(num < 1)init_num = 1;
};
unsigned int Collatz::nextResult(unsigned int num) {
  if(num%2 == 0) {
    return num/2;
  } else {
    return num*3+1;
  }
};
void Collatz::show() {
  unsigned int count = 0;
  unsigned int n = init_num;
  printf("%u", n);
  while(n != 1) {
    count++;
    n = nextResult(n);
    printf(" -> %u", n);
  }
  printf("\n");
};