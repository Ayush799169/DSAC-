/*#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i++)    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    return 0;

}
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,6,7,9};
    cout<<arr[3]<<" ";
    cout<<arr[0]<<endl;
   
    return 0;       //accss elme 0=2 3=7;

}

#include<iostream>
using namespace std;
int main();                                   //insert
{
int arr[]={2,5,6,7,9};
arr[2] = 10;  
       cout <<arr[2]<<" ";                         //update
    return 0;
}

#include<iostream>
using namespace std;
int main()
{                                //input dena ho int n;cin>>n;,i<n;
    int arr[]={2,5,6,7,9};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}           //max                   
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,6,7,9};
    int max=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Max: "<<max<<endl;
    return 0;
}            //min
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,6,7,9};
    int min=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Min: "<<min<<endl;
    return 0;
}                      //Searching element
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,6,7,9};
    int key;
    cin>>key;
    bool found=false;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"Element found in the array."<<endl;
    }
    else
    {
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
} *      //delete element
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,6,7,9};
    int index;
    cin>>index;
    for(int i=index;i<4;i++)
    {
        arr[i]=arr[i+1];
    }
    index--;
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}          //insert  elemennt
 #include<iostream>
using namespace std;
int main()
{
    int arr[6]={2,5,6,7,9};
    int index,value;
    cin>>index>>value;
    for(int i=5;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=value;
    index++;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
} */           //reverse array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,6,7,9};
    int n=5;
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}