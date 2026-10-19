#include <iostream>

int add(int x, int y);

int main () {
    int x{};
    int y {};
    int z {};
    std::cout << "Enter three numbers: " << "\n";
    std::cin>>x>>y>>z;
    std::cout << "You entered " << x << ", " << y << " and " << z;
    std::cout<<"x + y = " << add(x,y);

    return 0;
}