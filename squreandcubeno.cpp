/* //square and cube of a number
#include <iostream>
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Square: " << num * num << std::endl;
    std::cout << "Cube: " << num * num * num << std::endl;
    return 0;
} */

//perfect square 

#include <iostream>
#include <cmath>
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
  bool found = false;
    for(int i=1; i<=num/2; i++){
        if(i*i == num){
            found = true;                          //4 is a perfect square because 2*2=4 and 5 is not a perfect square because there is no integer whose square is 5  //perfect square is a number that can be expressed as the product of an integer with itself. For example, 1, 4, 9, 16, and 25 are perfect squares because they can be expressed as 1*1, 2*2, 3*3, 4*4, and 5*5 respectively. On the other hand, numbers like 2, 3, 5, and 6 are not perfect squares because there is no integer that can be multiplied by itself to yield these numbers.
            break;
        }
    }
    if(found){
        std::cout << num << " is a perfect square." << std::endl;
    } else {
        std::cout << num << " is not a perfect square." << std::endl;
    }
    return 0;
}