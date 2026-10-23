// factors kya hota hai: jo kisi bhi number ko divide kar sake wo factors hote hain jase ki 12 ke factors 1,2,3,4,6,12 hote hain.

/* #include <iostream>
using namespace std;
int main(){
    int a,i;
    cout<<"Enter the No.";
    cin>>a;
    cout<<"Factors of "<<a<<" are: ";
    for(i=1;i<=a;i++)                         //divisibilty check karne ke liye i<=a tak chalega
    {
        if(a%i==0)
        {
            cout<<i<<" ";
        }
    }
} */

// sum of factors of given number
#include <iostream>
using namespace std;
int main(){
    int a,i,multi=1;
    cout<<"Enter the No.";
    cin>>a;
    for(i=1;i<=a;i++)                          //12=1+2+3+4+6+12=28
    {
        if(a%i==0)
        {
                     multi=multi*i ;          //sum=sum+i; 
         }
    }
    cout<<"Product of factors of "<<a<<" is: "<<multi<<endl;
    return 0;
}
//cout factors of given number
#include <iostream>
using namespace std;
int main(){
    int a,i,count=0;
    cout<<"Enter the No.";
    cin>>a;
    for(i=1;i<=a;i++)                         
    {
        if(a%i==0)
        {
                     count++;          //sum=sum+i; 
         }
    }
    cout<<"Total factors of "<<a<<" is: "<<count<<endl;
    return 0;
}