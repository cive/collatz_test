#pragma once
//////////////////////////////
//    Collatz class         //
//////////////////////////////
#include<boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;

class Collatz {
  private:
    mp::cpp_int init_num;
    mp::cpp_int nextResult(mp::cpp_int num);
  public:
    Collatz(mp::cpp_int num);
    void show();
};
