#include <iostream>

int readNumber() {
    std::cout << "Enter a number: \n";
    int numInput{};
    std::cin >> numInput;
    return numInput;
}

void writeAnswer(int answer) {
    std::cout << "The answer is " << answer << "\n";
}