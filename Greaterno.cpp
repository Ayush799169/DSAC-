/* #include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the Number.";
    cin>>a>>b>>c;
    
    int greater;
    
    if(a>=b && a>=c ) greater =a;
    else if (b>=a && b>=c) greater =b;
  else greater =c;
                                                       //Greater number and Smallest Number.
    int Smallest;                                      //using to Relational Number. greater >,<less

    if(a<=b && a<=c ) Smallest =a;
    else if (b<=a && b<=c) Smallest =b;
  else Smallest=c;
cout<<"greater no."<<greater;
cout<<"smallest no."<<Smallest;
 
return 0;

} */

#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter the Number.";
    cin>>a>>b>>c>>d;
    
    int Largest;
    
    if(a>=b && a>=c && a>=d ) Largest =a;
    else if (b>=a && b>=c && b>=d) Largest =b;
    else if (c>=a && c>=b && c>=d) Largest =c;
  else Largest =d;
                                                      
int minimum;
    if(a<=b && a<=c && a<=d ) minimum =a;
    else if (b<=a && b<=c && b<=d) minimum =b;
    else if (c<=a && b<=c && c<=d) minimum =c;
  else minimum=d;

cout<<"Largest no."<<Largest<<endl;
cout<<"minium no."<<minimum;
 
return 0;

} 