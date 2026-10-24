 # include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;                           //8=1+2+4=7, 6=1+2+3=6, kyoki perfect no. wo hote hain jinka sum unke factors ke equal hota hai.
        }
    }
    if (sum == n) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }
    return 0;
} 

 //sum of factors of given number and count of factors of given number

/* # include <iostream>
using namespace std;

int main() {
    int n, sum = 0, count = 0;
    cout << "Enter a number: ";
    cin >> n;                                            //6=1+2+3 ,12=1+2+3+4+6=16;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
            count++;
        }
    }
    cout << "Sum of factors of " << n << " is: " << sum << endl;
    cout << "Count of factors of " << n << " is: " << count << endl;
    return 0;
}  */

