#include <iostream>

int getIntFromUser() {
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    return input;
}

int doubleNumber(int x) {
    return 2 * x;
}

int main() {
    std::cout << doubleNumber(getIntFromUser()) << std::endl;

    return 0;
}