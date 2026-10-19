#include <iostream>

float calc(float x, float y, char o);
float numInput();
char charInput();

int main() {

    // 1. Get first input from user
    std::cout << "Enter first number: \n";
    float x {numInput()};

    // 2. Get operation from user
    std::cout << "Enter an operation: \n";
    char o {charInput()};
    // 3. Get second input from user
    std::cout << "Enter second number: \n";
    float y {numInput()};

    // 4. Do the calculation based on user inputs
    float result {calc(x, y, o)};

    // 5. Print the equation
    std::cout << x << " " << o << " " << y << " = " << result << "\n";
}



float calc(float x, float y, char o) {
    if (o == '+') {
        return x + y;
    } else if (o == '-') {
        return x - y;
    } else if (o == '*') {
        return x * y;
    } else if (o == '/') {
        return x / y;
    }
}


float numInput() {
    float input {};
    std::cin >> input;
    return input;
}

char charInput() {
    char input {};
    std::cin >> input;
    return input;
}