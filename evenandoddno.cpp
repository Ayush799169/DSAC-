/* #include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Number.";
  cin>>a;

    if(a%2==0)             //even and odd = (a%2!=0)
    {
        cout<<"Even No."<<" ";
    }
    else 
    {
        cout<<"odd Numbber";
    }
    return 0;
}




#include <iostream>              // only even no.
using namespace std;
int main()
{
    int i;
    int n;                                //int n hata do  i<=20 likh do autometic 20 tak aa jayega
    cout<<"enter a number: ";
    cin>>n;
    for(i=1; i<=n;i++)
    //for(i=1;i<=20;i++)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}   */


#include <iostream>                // only odd no.
using namespace std;
int main()
{
    int i;
    int n; 
    //int sum=0; 
    int mult=1;                         //int n hata do  i<=20 likh do autometic 20 tak aa jayega
    cout<<"enter a number: ";
    cin>>n;
    for(i=0; i<=n;i++){
        if(i%2!=0){ 
            //sum=sum+i; 
            mult=mult*i;
                            }
                                }                         //sum =sum+i; likh do to sum of odd no. aa jayega
            cout<<"total mult "<<mult<<endl;              //mult =1; mult=mult*1;
        
                                                               //eneter the 5=9sum
                                                               //enter the 5=15 mult
    return 0;
}
  