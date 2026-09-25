/* #include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<"The length of the array is: "<<sizeof(arr)/sizeof(arr[0])<<endl;
    return 0;
} */

// avarage of array elements and given no.
 #include<iostream>
using namespace std;
int main(){
     int arr[5]={2,4,6,8,10};
     int total=0;
     for(int i=0; i<5; i++){
         total=total+arr[i];
     }
     cout<<"The average of the elements of the array is: "<<(float)total/5<<endl;
     return 0;
}


