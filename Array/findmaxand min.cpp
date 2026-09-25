//max and min element find in array.
/* #include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[5];                       
    int max=INT_MIN;
    int min=INT_MAX;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<5; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The maximum element of the array is: "<<max<<endl;
    cout<<"The minimum element of the array is: "<<min<<endl;
    return 0;
} */

// given index find max and min element in array.
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[5]={12,50,70,30,10};                       
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0; i<5; i++){
        // cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The maximum element of the array is: "<<max<<endl;
    cout<<"The minimum element of the array is: "<<min<<endl;
    return 0;
}