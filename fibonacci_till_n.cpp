#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the maximum value for Fibonacci sequence: ";
    cin >> n;

    int a = 0, b = 1, next =0;

    cout << "Fibonacci sequence up to " << n <<endl ;

    while (next <= n) {
        cout << next  << " ";
         next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}

