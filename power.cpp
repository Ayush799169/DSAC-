/* //power No. is a simple program to calculate power of a number
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

 */
//a ki power b  using recursion
#include<iostream> 
long long power(int base,int exp){
    if(exp==0){
        return 1;
    }
    return base * power(base,exp-1);
}
int main(){
    int base =2,exp=10;
    std::cout<<base<<"^"<<exp<<"="<<power(base, exp) <<"\n";
    return 0;
}