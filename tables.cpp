/* #include <iostream>                  
using namespace std;
int main()                           //print table of a no. ,enter 2,3,7...
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
    */

#include <iostream>                  
using namespace std;
int main()                           //print table of a no. ,enter 2,3,7...
{
    int i;
    for(i=1; i<=20; i++){
        for(int j=1; j<=10; j++){
            cout<<i*j<<"\t ";
     }
     cout<<endl;
    }
    return 0;
}
   