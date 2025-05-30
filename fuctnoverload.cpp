//area of rectangle , circle , tringle using method overloading or function overloading  
#include<iostream>
#define PI 3.14

using namespace std;
float area(int r)
{
	return PI*r*r;
}
float area ( float  l, float  b, float  h)
{
	float  a;
	a =(l*b*h);
	return  a;
}
float area (int b ,int l)
{
	return l*b;
}
int main()
{
	int n;
	cout<<"1.recatngle"<< endl;
		cout<<"2.triangle"<< endl;
			cout<<"3.circle"<< endl;
	cout <<"Enter a choice ";
	cin>>n;
	   if (n == 1) {
        float  length, width;
        cout << "Enter length and width: ";
        cin >> length >> width;
        cout << "Area of rectangle: " << area(length, width) << endl;
    }
	else if (n==2)
	{
        float  length,height , width;
        cout << "Enter length and width: ";
        cin >> length >> width>> height;
        cout << "Area of triangle : " << area(length, width,height) << endl;
	}
	   else if (n == 3) {
        float  radious;
        cout << "Enter radious: ";
        cin >> radious;
        cout << "Area of circle: " << area(radious) << endl;
    }
    return 0;
}
