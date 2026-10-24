//factorial no.
/* #include <iostream>
using namespace std;
int main() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i; // Calculate factorial by multiplying i  //5=1*2*3*4*5=120
    }

    cout << "Factorial of " << n << " is: " << fact << endl;

    return 0;
} */

// sum of factorial of given number
 #include <iostream>
 using namespace std;
 int main() {
     int n, sum = 0;
     cout << "Enter a number: ";
     cin >> n;

     for (int i = 1; i <= n; i++) {
         int fact = 1; // Reset factorial for each number
         for (int j = 1; j <= i; j++) {
             fact *= j; // Calculate factorial of i
         }
         sum += fact; // Add the factorial to the sum       // 5= 1!+2!+3!+4!+5!=1+2+6+24+120=153
     }

     cout << "Sum of factorials from 1 to " << n << " is: " << sum << endl;

     return 0;
 }