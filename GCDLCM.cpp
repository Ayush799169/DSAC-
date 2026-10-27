// C++ program to find the GCD and LCM of two numbers vo hota hai jisme GCD ka matlab hota hai Greatest Common Divisor aur LCM ka matlab hota hai Least Common Multiple. GCD ka matlab hai do numbers ke beech mein sabse bada number jo dono numbers ko divide kar sakta hai. LCM ka matlab hai do numbers ke beech mein sabse chhota number jo dono numbers ka multiple ho. Jaise ki 12 aur 18 ke liye GCD 6 hai kyunki 6 dono numbers ko divide kar sakta hai aur LCM 36 hai kyunki 36 dono numbers ka multiple hai.
//GCD/HCF only
/* #include <iostream>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;                  //ex: 5 and 10 ka =
}
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << std::endl;
    return 0;
} 

//lcd only
#include <iostream>
int lcm(int a, int b) {
    return (a * b) / gcd(a, b); // LCM can be calculated using GCD
}
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << std::endl;
    return 0;
}*/

/* //GCD and LCM both
#include <iostream>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }                                   //calculate 5,10=
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << std::endl;
    std::cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << std::endl;
    return 0;
}
 */
//Relationship between HCF and LCM                           HCF * LCM = Product of the two numbers
#include <iostream>
#include <numeric> // For std::gcd and std::lcm
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    // Calculate HCF and LCM using C++17 standard library functions
    int hcf = std::gcd(a, b);
    int lcm_value = std::lcm(a, b);
    std::cout << "HCF * LCM = " << hcf * lcm_value << std::endl;
    std::cout << "Product of " << a << " and " << b << " is " << a * b << std::endl;
    return 0;
}
