#include <cstdlib>
#include <iostream>
#include "add.h"

using namespace std;

int main(int argc, char** argv)
{
    int x = readNumber();
    int y = readNumber();

    writeAnswer(x + y);
    
    return 0;
}

