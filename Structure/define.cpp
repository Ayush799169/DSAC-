//Structure is a user-defined data type in C++ that allows grouping of variables of different types under a single name. It is defined using the 'struct' keyword. Structures are useful for representing complex data entities and can contain member variables, functions, and constructors. In C++17, structures can also have default member initializers and can be used with features like structured bindings and template programming.
//structure ke ander ham variables group banate hai jase int,float,string,etc. ka jaha per ek sath hi sab ate hai 
//example
/* struct Student {
    int id;
    std::string name;
    float score;
}; */

/* #include <iostream>
#include <string>
using namespace std;

int main(){
    
    struct Student {
        int id;
        std::string name;
        float score;
    };

    Student student1; // Create an instance of the structure
    // Assign values to the structure members
    student1.id = 1;
    student1.name = "Ayush";
    student1.score = 95.5;

    // Display the values of the structure members
    std::cout << "Student ID: " << student1.id << std::endl;
    std::cout << "Student Name: " << student1.name << std::endl;
    std::cout << "Student Score: " << student1.score << std::endl;

    return 0;
} */

#include <iostream>
#include <string>
using namespace std;

int main(){
          struct smartphone {
            std::string brand;
            std::string model;
            float price;
        };
        smartphone phone1;
        phone1.brand = "Apple";
        phone1.model = "iPhone 13";
        phone1.price = 999.99;
        std::cout << "Brand: " << phone1.brand << std::endl;
        std::cout << "Model: " << phone1.model << std::endl;
        std::cout << "Price: $" << phone1.price << std::endl;
        

}