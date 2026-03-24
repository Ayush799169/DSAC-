/*#include <iostream>
using namespace std;                    // automatic print no.
int main()
{
    int i;
    
    for(i=0; i<=10;i++){
        cout<<i<<"hello world"<<endl;; //10;
    
    }
    return 0;
} 


#include <iostream>             //enter a no. print 
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"enter a number: ";
    cin>>n;
     for(i=1; i<=n; i++){
            cout<<i<<" ";
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
        if(i%2!=0){                           //sum =sum+i; likh do to sum of odd no. aa jayega
            cout<<i<<" ";
        }
    }
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++){
            cout<<i<<" ";
     }
    return 0;
}
#include <iostream>                   //print no. in reverse order  
using namespace std;
int main()
{
    int i;                                 //int hata do int i=10; likh do automatic 10 se start hoga
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(i=n; i>=1; i--){
            cout<<i<<" ";
     }
    return 0;
}


#include <iostream>                  
using namespace std;
int main()                           //print table of a no
{
    int i;
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++){
            cout<<i*n<<" ";
     }
    return 0;
}
#include <iostream>                  
using namespace std;                    //sum of the no.
int main()                           
{
    int i, n;
    cout<<"enter a number: ";
    cin>>n;
    int sum=0;
    for(i=1; i<=n; i++){
        sum=sum+i;
            cout<<"sum="<<sum<<endl;
     }
    return 0;
}*/

   /*  
   #include <iostream>                  
using namespace std;
int main()                           
{
    int i, n;                                     //factorial of a no.
    cout<<"enter a number: ";
    cin>>n;
    int fact=1;
    for(i=1; i<=n; i++){
        fact=fact*i;
            cout<<"factorial="<<fact<<endl;
     }
    return 0;
}*/

#include <iostream>                  
using namespace std;
int main()                           
{
    int i, n;
    cout<<"enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++){
        cout<<i*i<<" ";                 //square of a no                   //cout<<i*i*i<<" ";      //cube of no.    
     }
    return 0;
}