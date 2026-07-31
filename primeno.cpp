/* #include <iostream>                  
using namespace std;
int main()                           //prime No. and not prime No.
{
    int i,a;
    cout<<"Enter the No.";
    cin>>a;
    int count=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
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
    int i,a;
  
    cout<<"Enter the No.";
    cin>>a;
    for(i=2;i<=a;i++)          //i<=20 direct karega
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
*/
 #include <iostream>                  
using namespace std;
int main()                          
{
    int totalPrime=0;
    int i,j;
    for(i=2;i<=20;i++)
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
