#include <iostream>

int readNumber()
{
    int x;

    std::cout << "Number: ";
    std::cin >> x;

    return x;
}

void writeAnswer(int x)
{
    std::cout << "Answer: ";
    std::cout << x;
}