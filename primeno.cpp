 #include <iostream>                  
using namespace std;
int main()                          
{
    int i,n;
  
    cout<<"Enter the No.";
    cin>>n;
    for(i=1;i<=100;i++)          //i<=20 direct karega
    {
         int count=0;
  for(int j=1;j<=i;j++)
  {
    if(i%j==0)
    count++;
}
if(count==2)
cout<<i<<" ";
}
return 0;

    }



/*
#include <iostream>                  
using namespace std;
int main()                           //prime No. and not prime No.
{
    int i,n;

    cout<<"Enter the No.";
    cin>>n;
    int count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
    cout<<"Prime No.";
    else
        cout<<"Not Prime no.";
return 0;
} 


 #include <iostream>                  
using namespace std;
int main()                          
{
    int totalPrime=0;
    int i,j;
    for(i=2;i<=200;i++)
    {
        int count=0;                       //total Prime no bata hai 
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        totalPrime++;
    }
    cout<<"totalPrime"<<totalPrime;
    return 0;
}

//Not prime No.

#include <iostream>
using namespace std;
int main(){
    
    int i,j;
    int TotalNotPrime=0;
    for(i=0;i<=200;i++)
    {
        int count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count!=2)
        TotalNotPrime++;
    }
    cout<<"Total Not Prime Numbers: "<<TotalNotPrime<<endl;
    return 0;
}
 */