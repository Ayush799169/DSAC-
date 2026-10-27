// C++ program to display the Fibonacci series up to n terms vo hota hai jisme pehle do numbers 0 aur 1 hote hain aur uske baad ka har number pichle do numbers ka sum hota hai. Jaise ki 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... ex: 0+1=1, 1+1=2, 1+2=3, 2+3=5, 3+5=8, 5+8=13, 8+13=21, 13+21=34, ...
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }                           
        if (i == 2) {
            cout << t2 << " ";            //isme swap ka rule aur addition ka rule use hota hai. Pehle do numbers 0 aur 1 hote hain, fir har agla number pichle do numbers ka sum hota hai. Jaise ki 0+1=1, 1+1=2, 1+2=3, 2+3=5, 3+5=8, 5+8=13, 8+13=21, 13+21=34, ...
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
    return 0;
}