#include <iostream>
#include "RingBuffer/RingBuffer.h"

using namespace std;



int main()
{
    List testing(5);
    int n = 5;
    for (int i = 1; i < 8; i++) 
    {
        testing.add(i);
        testing.print(std::cout);
    }
    return 0;
}
