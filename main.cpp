#include<iostream>
#include"collatz.h"
using namespace std;

int main(int argc, char* argv[]) {
    unsigned int n;
    cin >> n;
    Collatz *pOut = new Collatz(n);
    pOut->show();
    delete pOut;
    return 0;
}
