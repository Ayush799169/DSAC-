/*#include <iostream>
using namespace std;
int main()
{
    int a=10;
    if (a == 10) {
        cout << "a is equal to 10";
    }
    else{
        cout << "a is not equal to 5";
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a;
    if (a>0) {
        cout << "postive no";
    }
    else if(a<0){
        cout << "negative no.";
    }
        else{
        cout<<"zero";
        }
    
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int No;
    cout << "Enter a number: ";
    cin >> No;
    if (No%2== 0) {
        cout << "even no."<<No;
    }
    else
    {
        cout << "odd no."<<No;
    }
}
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    switch (a) {
    case 5:
        cout << "a is equal to 5";
        break;
    case 10:
        cout << "a is equal to 10";
        break;
    default:
        cout << "a is not equal to 5 or 10";
    }
    return 0;
}