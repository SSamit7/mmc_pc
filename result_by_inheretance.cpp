#include<iostream>
using namespace std;
class stundent 
{
	public:
		string name;
		int roll;
		void getData()
		{
			cout<<"Enter a Name of Stundent"<<endl;
			cin>>name;
				cout<<"Enter a Roll no of Stundent"<<endl;
			cin>>roll;
		}
		void display()
		{
			cout<<"Name = "<<name<<endl <<"Roll no= "<<roll<<endl;
		}
};
class marks
{
	public :
		int oop,pm,bc,acc,fin;
		void getMarks()
		{
			cout<<"Enter a mark of OOP"<<endl;
			cin>>oop;
			cout<<"Enter a mark of PM"<<endl;
			cin>>pm;
			cout<<"Enter a mark of BC"<<endl;
			cin>>bc;
			cout<<"Enter a mark of ACC"<<endl;
			cin>>acc;
			cout<<"Enter a mark of FIN"<<endl;
			cin>>fin;
		}
		void displayMarks()
		{
			cout<<"The mark of OOP= "<<oop<<endl<<"The mark of PM= "<<pm<<endl<<"The mark of BC= "<<bc<<endl<<"The mark of ACC= "<<acc<<endl<<"The mark of FIN= "<<fin<<endl;
		}
};
class result : public stundent , public  marks
{
	public:
		int total;
		float percentage;
		
		void calculateMarks()
		{
			total=oop+pm+bc+acc+fin;
				percentage=total/5;
		}
		void displayResult()
		{
				cout<<"The total marks is "<<total << endl;
			cout<<"The Percentage is "<<percentage<<endl;
		}
		void displayGrade()
		{
			if(total>=90)
			{
				cout<<"A+"<<endl;
			}
			else if(total<=90 && total>=80)
			{
				cout<<"A"<<endl;
			}
			else if(total<=80 && total>=60)
			{
				cout<<"B+"<<endl;
			}
			else if(total<=60 && total>=40)
			{
				cout<<"C"<<endl;
			}
			else 
			{
				cout<<"Fail"<<endl;
			}
		}
};
int main()
{
	result r;
	r.getData();
	r.getMarks();
	r.calculateMarks();
	r.display();
	r.displayMarks();
	r.displayResult();
	r.displayGrade();
	return 0;
	
}

