//String is a char array that is terminated by a null character '\0'. It is used to store text. In C++, strings can be represented using the `std::string` class from the Standard Library, which provides various functionalities for string manipulation.
//example of using `std::string` in C++17:

/* #include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::cout << str << std::endl;
    return 0;
} 

//length of the string can be obtained using the `length()` or `size()` member functions:
#include <iostream>
#include <string>
int main() {
    std:: string str = "Hello, World!";
    std:: cout << "Length of the string: " << str.length() << std::endl;
    std:: cout << "Size of the string: " << str.size() << std::endl;
    return 0;
}*/

//cin and getline() can be used to read strings from the user input. `cin` reads input until a whitespace is encountered, while `getline()` reads an entire line including spaces.
//example of using `cin` and `getline()`:

#include <iostream>
#include <string>
int main() {
    std::string str1;
    std::cout << "Enter a string (using cin): ";
    std::cin >> str1; // reads input until whitespace
    std::cout << "You entered: " << str1 << std::endl;
    std::cin.ignore(); // to ignore the newline character left in the input buffer
    std::string str2;
    std::cout << "Enter a string (using getline): ";
    std::getline(std::cin, str2); // reads entire line including spaces
    std::cout << "You entered: " << str2 << std::endl;

    return 0;
}

