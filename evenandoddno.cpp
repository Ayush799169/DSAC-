/* 

#include <iostream>              // even and odd
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    cout<<"even No.";
    else
    cout<<"odd No";
    return 0;
}
    
    
    


#include <iostream>              // only even no.
using namespace std;
int main()
{
    int i;
    int n;                                //int n hata do  i<=20 likh do autometic 20 tak aa jayega
    cout<<"enter a number: ";
    cin>>n
    for(i=1; i<=n;i++)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
} 


#include <iostream>              // only odd no.
using namespace std;
int main()
{
    int i;
    int n;                         //int n hata do  i<=20 likh do autometic 20 tak aa jayega
    cout<<"enter a number: ";
    cin>>n;
    for(i=0; i<=n;i++){
        if(i%2!=0){                           
            cout<<i<<" ";
        }
    }
    return 0;
}
 */ 


#include <iostream>              
using namespace std;
int main()                         
{
    int  n;
     int count=0;
     cout<<"enter the  no.";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)    //(i%2!=0)
        {
            count++;
        }
    }
    cout<<"Total="<<count <<endl;
    return 0;
}

    /* 
#include <iostream>              
using namespace std;
int main()                          // even/odd ka sum and multiple
{
    int  n;
     int sum=0;
     cout<<"enter the  no.";
    cin>>n;
       for(int i=1;i<=n;i++)
    {
    if(i%2!=0){        // (i%2==0)
    sum=sum*i;
    }
}
    cout<<sum<<endl;
return 0;
} */

#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"enter the no.";
    cin>>n;
    for(i=1;i<=n;i++)
    {
if(i%2==0){
    
}
    }
}