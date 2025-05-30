#include<iostream>
using namespace std;


int n(int no)
{
    if (no == 0)
        return 0;
    else
        return no + n(no - 1);
}

int main()
{
    int a, sum;

    cout << "Enter a natural number up to which sum is required: ";
    cin >> a;

    sum = n(a);

    cout << "Sum of first " << a << " natural numbers is: " << sum << endl;

    return 0;
}

