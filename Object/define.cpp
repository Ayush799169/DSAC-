//Object kya hai : Object ek instance hai class ka jo memory mein allocate hota hai aur uske dwara hum data aur functions ko manage kar sakte hain.
//Object is a  block box and it is an instance of a class that is allocated in memory and through which we can manage data and functions. In C++, objects are created from classes, which serve as blueprints for the objects. Each object can have its own unique state and behavior defined by the class. (fuction/Methods and Blocks box and Run time entity )
//example
#include <iostream>
#include <string>
using namespace std;
int main (){
    class Car {
        public:
            std::string brand;
            std::string model;
            int year;

            void displayInfo() {
                std::cout << "Brand: " << brand << std::endl;
                std::cout << "Model: " << model << std::endl;
                std::cout << "Year: " << year << std::endl;
            }
    };
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;
    car1.displayInfo();
}

