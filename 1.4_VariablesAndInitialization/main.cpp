#include <iostream>

int main () {
    std::cout<<"Hello"<<"\n";
    int a;
    int x {3}; // Direct List Initialization (Recommended)
    int y (3); // Direct Initialization (Recommended)
    int z {}; // Value Initialization (Recommended)
    [[maybe_unused]] double pi { 3.14159 };
    [[maybe_unused]] double gravity { 9.8 };
    [[maybe_unused]] double phi { 1.61803 };

    std::cout << pi << '\n';  // pi is used
    std::cout << phi << '\n'; // phi is used
    std::cout<<a<<"\n";
    std::cout<<y<<"\n";;
    return 0;
}