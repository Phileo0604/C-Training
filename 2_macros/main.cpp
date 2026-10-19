#include "Alex.h" // copies #define MY_NAME from Alex.h here
#include <iostream>


int main()
{
    int x {4};
    int y {5};
    std::cout << "x + y = " << add(x, y);
    return 0;
}

// int add(int x, int y) {
//     return x + y;
// }