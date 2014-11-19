#include<iostream>
#include"collatz.h"
using namespace std;

int main(int argc, char* argv[]) {
    mp::cpp_int n;
    if ( argc > 1 ) {
      n.assign(argv[1]);
    } else {
      cin >> n;
    }
    Collatz *pOut = new Collatz(n);
    pOut->show();
    delete pOut;
    return 0;
}
