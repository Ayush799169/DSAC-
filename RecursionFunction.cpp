//Recursion vo hota hia jo apne aap ko call karta hai. Jaise ki factorial ka example lete hai. Factorial of n is defined as n! = n * (n-1) * (n-2) * ... * 1. We can define it recursively as n! = n * (n-1)! with the base case being 0! = 1 and iska used ise trike ke program main kiya jata hai .factorial ,reverse no.,fibonacci series and palindrome no. recursive ka mtlb hai ki  rever karne ka trika by fuction call karna. Jaise ki reverse no. ka example lete hai. Reverse no. vo hota hai jo apne digits ko reverse karne par same number aa jaye. Jaise ki 121 ka reverse 121 hi aa gaya to vo reverse number hai, 123 ka reverse 321 aa gaya to vo reverse number nahi hai.

#include <iostream>
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! = 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        int result = factorial(n);
        std::cout << "The factorial of " << n << " is: " << result << std::endl;
    }
    return 0;
}