#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    int num, ori, re, n = 0;
    double result = 0.0;

    cout << "Enter an integer: ";
    cin >> num;

    ori = num;

    while (ori != 0) {
        ori /= 10;
        ++n;
    }

    ori = num;

    while (ori!= 0) {
        re = ori% 10;
        result += pow(re, n);
        ori/= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
















