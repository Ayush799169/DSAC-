/*#include<iostream>
using namespace std;
int main() {
    int n;             //n=4 kar sakte hai cin ko hatna padega 
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {    //j<=i+1;
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int n=4;
    for (int i = 0; i<= n; i++) {              //outer loop     (*)  // int=0; same hi print hoga 1 se start karne se 1 se n print hoga
        for (int j = 1; j<= n; j++) {           //inner loop    (*)
            cout << j<<" ";
        }
        cout << endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n=4;                                // n=10 le liya th A se J print hoga
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
} 

#include<iostream>
using namespace std;
int main (){
    int n=4;                     //n=5 le liya th 1 se 25 print hoga
    int num=1;
    for( int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main (){
    int  n=4;  
    char ch='A';                     //no reset so ued in this 
    for( int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;                 
    }
    return 0;
}                //reverse pattern
#include<iostream>
using namespace std;
int main (){
    int n=4;
    for( int i=0;i<n;i++){            //outer ke liye for(int i=1;i>n;i--);
        for (int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;

}                     //pyramid pattern
#include<iostream>
using namespace std;
int main (){
    int n=4;
    for( int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){               //space ke liye j<n-i-1;  
            cout<<" ";
        }
        for (int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}   
                   //number pattern  
#include<iostream>
using namespace std;
int main (){
    int n=4;
    for( int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){               //space ke liye j<n-i-1;  
            cout<<" ";
        }
        for (int j=0; j<2*i+1; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;    
  
}     */           //not repeat pattern
#include<iostream>
using namespace std;
int main (){
    int n=4;
    for( int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){               //space ke liye j<n-i-1;   //spaced ke lie i+1 ager space bad raha hai tho 
            cout<<" ";
        }
        for (int j=0; j<2*i+1; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;    
  
}               //zigzag pattern  //half pyramid pattern //hollow //full  //
