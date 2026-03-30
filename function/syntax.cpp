/*#include<iostream>
using namespace std;

    int print_hello()       //print_hello is function //(ued parameter function)
    {
        cout<<"hello";             //function body
        return 3;
    }

    int main()
    {                       //main function calling to print _hello
        print_hello();
        print_hello();
        print_hello();    
        return 0;          //main function body calling to fuction body 

    }
#include <iostream>
using namespace std;

void greet() {
    cout << "Welcome to C++ Programming!" << endl;
}
int multiply(int a, int b) {
    return a * b;
}

int main() {
    
    greet();
    int result = multiply(4, 5);               // Calling the multiply function with arguments 4 and 5 calling to parameter function
    cout << "Multiplication result: " << result << endl;
    return 0;
}

#include <iostream>
using namespace std;
int sumN(int n){
    int sum = 0;                   //do kam ko bar bar kanre ke bajye ek hi variable se kar lete hai
    for(int i=0;i<=n;i++){
        sum+=i;
    }    return sum;
}
int main(){
    cout<<sumN(5)<<endl;
    cout<<sumN(10)<<endl;
    return 0;
}*/

#include <iostream>                   //pass by value
using namespace std;
int sum (int a, int b)
{
    a = a + 10;                     //a and b are local variable of sum function
    b = b + 20;
    return a + b;
}
int main()
{
    int a=5,b=10;                  // main hi function hota hai calling
    cout<<sum(a,b)<<endl;
    cout<<a<<endl;          
    cout<<b<<endl;          
    return 0;
}                           //ncr calculater