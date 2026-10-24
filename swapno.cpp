/* //swap 2 no. without using 3rd variable
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping without using a third variable
    a = a + b; // Step 1: Add both numbers and store in 'a'
    b = a - b; // Step 2: Subtract new 'b' from 'a' to get original 'a'
    a = a - b; // Step 3: Subtract new 'b' from new 'a' to get original 'b'

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

 
//swap 2 no. using 3rd variable

#include <iostream>
using namespace std;
int main() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using a third variable
    temp = a; // Store the value of 'a' in 'temp'
    a = b;    // Assign the value of 'b' to 'a'
    b = temp; // Assign the value of 'temp' (original 'a') to 'b'

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}


//swap 3 no. using 3rd variable
#include <iostream>
using namespace std;
int main() {
    int a, b, c, temp;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Before swapping: a = " << a << ", b = " << b << ", c = " << c << endl;

    // Swapping using a third variable
    temp = a; // Store the value of 'a' in 'temp'                  //swap role a=10, b=20, c=30 then temp=10, a=20, b=30, c=10 then temp=20, a=30, b=10, c=20 then temp=30, a=10, b=20, c=30
    a = b;    // Assign the value of 'b' to 'a'
    b = c;    // Assign the value of 'c' to 'b'
    c = temp; // Assign the value of 'temp' (original 'a') to 'c'

    cout << "After swapping: a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}*/

//swap 3 no. without using 3rd variable
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Before swapping: a = " << a << ", b = " << b << ", c = " << c << endl;

    // Swapping without using a third variable
    a = a + b + c; // Step 1: Add all three numbers and store in 'a'
    b = a - (b + c); // Step 2: Subtract new 'b' and 'c' from 'a' to get original 'a'
    c = a - (b + c); // Step 3: Subtract new 'b' and new 'c' from new 'a' to get original 'b'
    a = a - (b + c); // Step 4: Subtract new 'b' and new 'c' from new 'a' to get original 'c'

    cout << "After swapping: a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}

