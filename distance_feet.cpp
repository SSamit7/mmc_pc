#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inch;

public:
    
    void Data(int f, int i) {
        feet = f;
        inch = i;
    }

    void disData() {
        cout << "Distance: " << feet << " feet, " << inch << " inches" << endl;
    }
    void add(Distance d1 , Distance d2)
	{
    	feet= d1.feet + d2.feet ;
     inch =d1.inch+ d2.inch;
     feet =feet +inch/12;
     inch=inch%12;
	}
	 void compare(Distance d1 , Distance d2) {
         int totalinch1 = d1.feet * 12 + d1.inch;
        int totalinch2 = d2.feet * 12 + d2.inch;

        if (totalinch1 > totalinch2)
            cout << "d1 is greater." <<endl << totalinch1 <<">" <<totalinch2 <<endl;
        else if (totalinch1 < totalinch2)
            cout << "d2 is greater." << endl << totalinch2 <<">" <<totalinch1<< endl;
        else
            cout << "Both distances are equal." <<endl << totalinch1 <<"=" <<totalinch2 <<endl;
    }
    
};

int main() {
	
    Distance d1,d2,d3;  
    int s,a;
    cout<<"enter a feet "<<endl;
    cin>>s;
    cout<<"enter a inch"<<endl;
    cin>>a;
    d1.Data(s, a);  
 cout<<"enter a feet "<<endl;
    cin>>s;
    cout<<"enter a inch"<<endl;
    cin>>a;
     d2.Data(s, a);  

    d1.disData();
     d2.disData();
    d3.add(d1,d2);
     d3.disData();
      d1.compare(d1,d2);

    return 0;
}

