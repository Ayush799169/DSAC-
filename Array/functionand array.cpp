//fuction and array= the function is a block of code that performs a specific task and can be called multiple times in a program. An array is a collection of elements of the same data type stored in contiguous memory locations. Functions can be used to manipulate arrays, such as finding the maximum or minimum element, calculating the sum or product of elements, and more. In C++, functions can take arrays as parameters and return values based on the operations performed on those arrays.
//example of a function that takes an array as a parameter and returns the sum of its elements:

/* #include<iostream>
using namespace std;

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The sum of the array elements is: " << sumOfArray(arr, size) << endl;
    return 0;
} */

//example of a function that takes an array as a parameter and returns the maximum element:
#include<iostream>
using namespace std;
int maxOfArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[] = {12, 50, 70, 30, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The maximum element of the array is: " << maxOfArray(arr, size) << endl;
    return 0;
}