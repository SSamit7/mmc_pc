#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    int i = 1;
    while (i <= n) {
        cout << first << " ";
        
        next = first + second;
        first = second;
        second = next;
        i++;
    }

    return 0;
}

