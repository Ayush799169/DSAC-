/*#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Exit the loop when i equals 5
        }
        cout << i << " ";
    }
    return 0;
}
*/

/* #include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {      //(i==5) Condition
            continue;                 // Skip the rest of the loop when i is even
        }
        cout << i << " ";
    }
    return 0;
} */


#include <iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the no.";
    cin>>n;
    for(i=1;i<=n;i++){
    if(i %2 != 0){           //odd   //even !=
        continue;
    }
        cout<<i<<" ";
}
    return 0;
}
