#include<iostream>
using namespace std;

float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width, area;

    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    area = calculateArea(length, width);

    cout << "Area of the rectangle = " << area << endl;

    return 0;
}
