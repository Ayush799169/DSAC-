// Recursive no vo hota hai jo apne digits ko reverse karne par same number aa jaye. Jaise ki 121 ka reverse 121 hi aa gaya to vo reverse number hai, 123 ka reverse 321 aa gaya to vo reverse number nahi hai.

#include <iostream>
int reverseNumber(int n, int reversedNumber = 0) {
    if (n == 0) {
        return reversedNumber;
    } else {
        return reverseNumber(n / 10, reversedNumber * 10 + n % 10);
    }
}
int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    int result = reverseNumber(n);
    if (n == result) {
        std::cout << n << " is a palindrome number." << std::endl;
    } else {
        std::cout << n << " is not a palindrome number." << std::endl;
    }
    return 0;
}