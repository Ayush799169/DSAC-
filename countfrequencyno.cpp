//count digits of given n no.
/* #include <iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        n /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
    return 0;
} */

//count frequency of given n no.
#include <iostream>
int main() {
    int n, count = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int originalNumber = n; // Store the original number for output
    while (n != 0) {
        n /= 10;
        count++;
    }
    std::cout << "Number of digits in " << originalNumber << ": " << count << std::endl;
    return 0;
}