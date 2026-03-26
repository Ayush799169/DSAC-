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
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {      //(i==5)
            continue;                 // Skip the rest of the loop when i is even
        }
        cout << i << " ";
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    if(a<0)
    return 0;
}
*/