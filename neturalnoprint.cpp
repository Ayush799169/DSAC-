/* #include<iostream>           //Natural no.
using namespace std;

int main(){
    int a,i;
    cout<<"enter the no.";
    cin>>a;
    for(i=1;i<=a;i++){            //i<=20 kar diya tho direct print karega 
        cout<<i<<" ";
    }
    return 0;
} */

/* #include<iostream>           //Whole no.
using namespace std;

int main(){
    int a,i;
    cout<<"enter the no.";
    cin>>a;
    for(i=0;i<=a;i++){                    //i<=20 kar diya tho direct print karega 
        cout<<i<<" ";
    }
    return 0;
} 
#include<iostream>           //integer No.
using namespace std;

int main(){
    int a,i;
    cout<<"enter the no.";
    cin>>a;
    for(i=-10;i<=a;i++){
        cout<<i<<" ";
    }
    return 0;
}*/

// sum of the natural no. and whole no. and integer no. is same as the.       
// sum of natural numbers from 1 to n: n(n+1)/2
// sum of whole numbers from 0 to n: n(n+1)/2
// sum of integers from -10 to n: (n+10)(n-9)/2

#include<iostream>
using namespace std;

int main() {
    int n ,sum=0 ,i;
    cin >> n;
    cout<< "Sum of natural numbers from 1 to " << n << " is: ";
    for (i=1;i<=n;i++){
    sum=sum+i;
}
    cout<< sum;

    return 0;
}