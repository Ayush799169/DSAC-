#include<iostream>
#include<string>
int main()
{
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str); // Read a line of text from the user

    // Display the length of the string
    std::cout << "Length of the string: " << str.length() << std::endl;

    // Display each character in the string using index
    std::cout << "Characters in the string: ";
    for (size_t i = 0; i < str.length(); ++i) {
        std::cout << str[i] << ' '; // Accessing characters using index
    }
    std::cout << std::endl;

    return 0;
}