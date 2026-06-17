#include <iostream>

namespace newNamespace{
    int x = 5;
}

namespace oldNamespace{
    int x = 10;
}

int main(){
    using namespace newNamespace;

    std::cout << newNamespace::x << "\n";
    std::cout << oldNamespace::x << "\n";
    std::cout << x << "\n";

    return 0;
}