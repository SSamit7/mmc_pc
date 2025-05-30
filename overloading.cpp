#include<iostream>
using namespace std;
int volume (int s);
double volume (double r, int h);
double volume (long int l, int b , int h );
int main ()
{
	cout << volume(10)<<endl;
	cout << volume(10,10)<<endl;
	cout << volume(10,10,10)<<endl;
}
int volume (int s)
{
	return (s*s*s);  
}
double volume (double r, int h)
{
	return (3.1416*r*r*h);// cylinder formula
}
double volume (long int l, int b, int h)
{
	return (l*b*h);  // cylinder formula
}
