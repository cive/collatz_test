#pragma once
//////////////////////////////
//    Collatz class         //
//////////////////////////////

class Collatz {
  private:
    unsigned int init_num;
    unsigned int nextResult(unsigned int num);
  public:
    Collatz(unsigned int num);
    void show();
};