#include<iostream>
using namespace std;
class team
{
	string  club;
	float Goals;
	public :
		void getdata()
		{
			cout<<"Enter a team name "<<endl;
			cin>>club;
			cout<<"Enter a Goals"<<endl;
			cin>>Goals;
		}
		void Display()
		{
			cout<<"Team name " <<club <<endl <<"Goals "<<Goals<<endl; 
		}
};
class player
{
	int Pno;
	string name;
	team t;
	public:
		void getdata()
		{
			cout<<"Enter a name of player"<<endl;
			cin>>name;
			cout<<"Enter a player jersey no  "<<endl;
			cin>>Pno;
			t.getdata();
		}
		void display()
		{
			cout<<"Name of player "<<name<<endl <<"Jersey no "  << Pno<<endl;
			t.Display(); 
		}
};
int main()
{
	player p ;
	p.getdata();
	cout<<"---------------Player details----------------- "<<endl;
	p.display();
	return 0;
}
