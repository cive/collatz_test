#include"collatz.h"
#include<iostream>
#include<stdio.h>
using namespace std;

Collatz::Collatz(mp::cpp_int num) : init_num(num) {
  if(num < 1)init_num = 1;
};
mp::cpp_int Collatz::nextResult(mp::cpp_int num) {
  if(num%2 == 0) {
    return num/2;
  } else {
    return num*3+1;
  }
};
void Collatz::show() {
  mp::cpp_int count = 0;
  mp::cpp_int n = init_num;
  cout << n;
  while(n != 1) {
    count++;
    n = nextResult(n);
    cout << " -> " << n;
  }
  printf("\n");
};
