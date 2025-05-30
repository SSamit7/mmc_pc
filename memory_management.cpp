//#include<iostream>
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int *nptr;
//    nptr = new int(7);
//    char *as;
//    as = new char(asmit);
//    cout << *nptr << endl;
//    cout << nptr;
//     cout << *as << endl;
//      cout << as;
//     
//    return 0;
//}
#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    int *nptr = new int(7);
    char *as = new char[6]; 
    strcpy(as, "asmit");
    cout << "Value at nptr: " << *nptr << endl;
    cout << "Address of nptr: " << nptr << endl;

    cout << "Value at as : " << as << endl;
    cout << "Address of as: " << static_cast<void*>(as) << endl;

    delete nptr;
    delete[] as;

    return 0;
}

