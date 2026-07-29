#include<iostream>
using namespace std;                      //Postive and Negative No.

int main(){
    int a;
    cout<<"entr the number";
    cin>>a;

    if(a>0){
        cout<<a<<"Positive No.";
    }
    else if(a<0){
        cout<<a<<"Negative No.";
    }
    else{
        cout<<a<<"Zero";
    }
    return 0;
} 


//euals and Not equals

#include <iostream>
using namespace std;
int main()
{
    int a=10;
    if (a == 10) {
        cout << "a is equal to 10";
    }
    else{
        cout << "a is not equal to 5";
    }
    return 0;
}


