//Strong Number is a number whose sum of the factorial of digits is equal to the number itself. For example, 145 is a strong number because 1! + 4! + 5! = 145.
#include <iostream>
int main() {
    int sum=0, digit;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int temp = n;
    while(temp > 0) {
        digit = temp % 10;
        int factorial = 1;                                    //5=5*4*3*2*1=120 and so 1!+4!+5!=1+24+120=145 which is equal to the number itself so 145 is a strong number
        
        for(int i=1; i<=digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }

    if(sum == n) {
        std::cout << n << " is a strong number." << std::endl;
    } else {
        std::cout << n << " is not a strong number." << std::endl;
    }
    return 0;
}