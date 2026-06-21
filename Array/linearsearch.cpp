#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] ==target ) {
            return i;                     // Return the index if the element is found
        }
    }
    return -1;                   // Return -1 if the element is not found
}

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int sz=5;
    int target=30;
    cout<<"Element found at index: " << linearSearch(arr, sz,target) << endl;
    return 0;
}