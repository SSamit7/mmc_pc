#include<iostream>
using namespace std;
int area(int l,int b)
{
	return l*b;
}
int main()
{

int l,b,a;
cout<<"Enter a length of rectangle ";
cin >>l;
cout<<"Enter a breath of rectangle ";
cin >>b;
a = area(l,b);
cout<<"Area of rectangle is "<<a <<endl;
return 0;
}
