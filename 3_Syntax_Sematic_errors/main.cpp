#include <iostream>

int main () {
    int x; // no initializer provided
    std::cout << x << '\n'; // Use of uninitialized variable leads to undefined result
    return 0;
}