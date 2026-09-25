//Array is a collection of similar type of data elements which are stored in contiguous memory locations. It is a data structure that can hold a fixed number of values of a single type. The elements of an array are stored in contiguous memory locations and can be accessed using an index.

//Declaration and initialization of an array
//int arr[5]; //declaration of an array of size 5
//int arr1[5]={1,2,3,4,5}; //declaration and initialization of an array of size 5
//garbage values are stored in the array if we don't initialize it example: int arr[5]; //declaration of an array of size 5 but if we don't initialize it then garbage values are stored in the array.

/* #include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5}; //declaration and initialization of an array of size 5
    cout<<"The elements of the array are: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" "; //accessing the elements of the array using index
    }
    cout<<endl;
    return 0;
} 

#include<iostream>
using namespace std;

int main(){
    int arr[4];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<4; i++){                    // 1st loop islye use kiya gya hai taki user se array ke elements input le sake
        cin>>arr[i];
    }
    cout<<"The elements of the array are: ";
    for(int i=0; i<4; i++){                    // 2nd loop islye use kiya gya hai taki user se input liye gaye array ke elements ko print kar sake
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    return 0;
}

//sum of array elements and given no.
#include<iostream>
using namespace std;
int main(){
    int arr[5];                       
    int totalsum=0;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        totalsum=totalsum+arr[i];
    }
    cout<<"The sum of the elements of the array is: "<<totalsum<<endl;
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};  
    int totalsum=0;
    for(int i=0; i<5; i++){
        totalsum=totalsum+arr[i];
    }                    
   cout<<"The sum of the elements of the array is: "<<totalsum<<endl;
    return 0;
} */

//product of array elements and given no.

#include<iostream>
using namespace std;
int main(){
    int arr[5];                       
    int totalproduct=1;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        totalproduct=totalproduct*arr[i];
    }
    cout<<"The product of the elements of the array is: "<<totalproduct<<endl;
    return 0;
}














/*#include<iostream>
#include<vector>
using namespace std;

        int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans=ans^nums[i];
        }
        return ans;
    }
int main(){
    vector<int> nums={4,1,2,1,2};
    cout<<"The single number is: "<<singleNumber(nums)<<endl;
}
#include<iostream>
#include<vector>
using namespace std;

        int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans=ans^nums[i];
        }
        return ans;
    }
int main(){
    vector<int> nums={7,3,2,3,2,4,4};
    cout<<"The single number is: "<<singleNumber(nums)<<endl;
}
    

#include<iostream>
#include<vector>
using namespace std;

        int missingNo(vector<int>& nums) {
        int ans=nums.size();
        for(int i=0; i<nums.size(); i++){
            ans^=i;
            ans^=nums[i];
        }
        return ans;
    }
int main(){
    vector<int> nums={3,0,1,4,2,7,6,5,9,};
    cout<<"The missing number is: "<<missingNo(nums)<<endl;
}*/