//q.no,10 page 172
#include<iostream>
using namespace std;
class shape{
	protected:
		float length ,breadth ,height;
		public:
			void setdimensions(float l,float b,float h=0) {
				length=l;
				breadth=b;
				height=h;
			}
			virtual float area()=0;
};
class rectangle:public shape{
	public:
		float area()override{
			return length *breadth;
		}
};
class triangle:public shape{
	public:
		float area () override{
			return 0.5*length*height;
		}
};
int main(){
	rectangle rect;
	triangle tri;
	shape*shapePtr;
	rect.setdimensions(10,5);
	shapePtr=&rect;
	cout<<"area of rectangle:"<<shapePtr->area()<<endl;
	tri.setdimensions(6,0,4);
		shapePtr=&tri;
	cout<<"area of triangle:"<<shapePtr->area()<<endl;
return 0;
}