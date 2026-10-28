//Reverse no. vo hota hai jo apne digits ko reverse karne par same number aa jaye. Jaise ki 121 ka reverse 121 hi aa gaya to vo reverse number hai, 123 ka reverse 321 aa gaya to vo reverse number nahi hai.

//direct method to reverse a number using while loop.

/*  #include <iostream>
int main(){
    int  n, reversedNumber = 0, remainder;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    while(n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n = n / 10;
    }
    std::cout << "The reverse of the number is: " << reversedNumber << std::endl;
    return 0;
} 
    

//reverse no using recsive method.


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
    std::cout << "The reverse of the number is: " << result << std::endl;
    return 0;
}
      */
//sum of reverse no.

#include <iostream>
int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    int reversedNumber = 0, remainder;
    int originalNumber = n;
    while(n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;     //multiplication karna ho tho ye likhhna hota hai : reversedNumber = reversedNumber * 10 * remainder;
        n = n / 10;
    }
    std::cout << "The sum of the original number and its reverse is: " << originalNumber + reversedNumber << std::endl;
    return 0;
}      //456 ko ise trah se reverse karenge to 654 aaega aur 456+654=1110 aaega. aur mulitiplication bhi kar sakte hai. 456*654=297024 aaega.

