// HarshadNinenno.cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";         //ye vo number hai jo Harshad number hai ya nahi check karne ke liye. Harshad number vo hota hai jo apne digits ke sum se divide ho jaye. Jaise ki 18 ka digits ka sum 1+8=9 hai aur 18%9==0 aa gaya to 18 Harshad number hai, 19 ka digits ka sum 1+9=10 hai aur 19%10!=0 aa gaya to 19 Harshad number nahi hai.
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