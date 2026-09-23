/* A pointer is a variable that stores the memory address of another variable. It allows for indirect access to the value stored in that memory location. Pointers are commonly used in C++ for dynamic memory allocation, passing arguments to functions by reference, and creating complex data structures like linked lists and trees.
example: */
// * mens that it is a pointer and & means address of operator and & means reference operator 
//& store the meemory address of variable and * is used to access the value stored at that memory address
//ptr is holding the address of x and *ptr is used to access the value stored at that memory address, which is 5 in this case.

/* #include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* ptr = &x; // ptr stores the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl;

    return 0;
}
 
#include <iostream>
using namespace std;
int main(){
    
    int a=5,b=10;
    int *ptr1=&a; //ptr1 is holding the address of a
    int *ptr2=&b; //ptr2 is holding the address of b
    cout<<"Value of a: "<<*ptr1<<endl; //dereferencing ptr1 to get the value of a
    cout<<"Value of b: "<<*ptr2<<endl; //dereferencing ptr2 to get the value of b
    return 0;
}*/
//refrence
#include <iostream>
using namespace std;
int main(){
    int gold=999;
    int* map=&gold; //map is holding the address of gold
    cout<<"Value of gold: "<<*map<<endl; //dereferencing map to get the value of gold
    cout<<"Address of gold: "<<map<<endl; //printing the address of gold
    cout<<"Address of gold: "<<&gold<<endl; //printing the address of gold
    *map=1000; //dereferencing map to change the value of gold
    cout<<"Value of gold: "<<gold<<endl; //printing the value of gold
    return 0;
}
