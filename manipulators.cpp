#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
cout << setw(50)<<"alakif is good man" << endl ;
cout<< setw(40)<< "alkaif addres is in nepaljung" << endl;
float a=7.458798745, b=54.254877, c=45.5446556854, d=54.54536454;
cout<<setprecision(1) << "a="<<a << "\t" << endl<< setprecision(2) << "b="<<b << "\t" << endl << setprecision(3) << "c="<<c << "\t" << endl << setprecision(4) << "d="<<d << "\t"<< endl;
char al[50];
    cout << "Enter a name: ";
//    cin.getline(al, 50);
 cin.getline(al,50); // To read full line including spaces
    cout << "Name is " << al << endl;
return 0;
}

