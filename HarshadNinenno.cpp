// HarshadNinenno.cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;
    int temp = number;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (number % sum == 0) {
        cout << number << " is a Harshad number." << endl;
    } else {
        cout << number << " is not a Harshad number." << endl;
    }

    return 0;
}