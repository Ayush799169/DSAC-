//power No. is a simple program to calculate power of a number
#include <iostream>
int main() {
    int base, exponent;
    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exponent;
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;                                  // 4 4 = 4*4*4*4=256
    }
    std::cout << "Result: " << result << std::endl;
    return 0;
}