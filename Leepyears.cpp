//leepyears
#include<iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
//leap years vo hai jo 4 se divide ho jaye aur 100 se divide ho no ho mager 400 se divide ho jaye to vo leap year hoga
//example: 2000 is a leap year, 1900 is not a leap year, 2024 is a leap year, 2000%400 == 0 aa gaya to vo leap year hoga, 1900%400 != 0 aa gya to vo leap year nahi hoga, 2024%4 == 0 aa gya to vo leap year hoga, 2023%4 != 0 aa gya to vo leap year nahi hoga