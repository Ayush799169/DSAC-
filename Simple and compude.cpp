//simple interst 

/*  #include <iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"Enter the principle amount : ";
    cin>>p;
    cout<<"Enter the rate of interest : ";
    cin>>r;
    cout<<"Enter the time in years : ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"The simple interest is : "<<si<<endl;
    return 0;
}  */

//compound interest
#include <iostream>
#include <cmath>
int main() {
    double principal, rate, time, compoundInterest;
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;
    std::cout << "Enter the annual interest rate (in %): ";
    std::cin >> rate;
    std::cout << "Enter the time in years: ";
    std::cin >> time;
    compoundInterest = principal * (std::pow(1 + rate / 100, time) - 1);
    std::cout << "The compound interest is: " << compoundInterest << std::endl;
    return 0;
}
