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
		void display()
		{
			cout<<"Team name " <<club <<endl <<"Goals "<<Goals<<endl; 
		}
};
class leauge_stats :virtual  public team
{
	int match_no;
	string leauge_name;
	public:
		void getdata()
		{
			cout<<"Enter a name of leauge"<<endl;
			cin>>leauge_name;
			cout<<"Enter match no  "<<endl;
			cin>>match_no;
		}
		void display()
		{
			cout<<"Name of leauge "<<leauge_name<<endl <<"Match  no "  << match_no<<endl; 
		}
};

class tittles : virtual public team
{
	string tittle;
	int no ;
	public :
		void getdata()
		{
			cout<<"Enter a name of tittle "<<endl;
			cin>>tittle;
			cout<<"How many won by player ?"<<endl;
			cin>>no;
		}
		void display()
		{
			cout<<"Tittle is "<<tittle << no <<" Times "<<endl;
		}
};
class player : public team ,  public leauge_stats, public tittles
{
	int Pno;
	string name;
	public:
		void getdata()
		{
			cout<<"Enter a name of player"<<endl;
			cin>>name;
			cout<<"Enter a player jersey no  "<<endl;
			cin>>Pno;
			team::getdata();
		leauge_stats::getdata();
		tittles::getdata();
		}
		void display()
		{
			cout<<"Name of player "<<name<<endl <<"Jersey no "  << Pno<<endl; 
			team::display();
		leauge_stats::display();
		tittles::display();
		}
};

int main()
{
	player p ;
	p.getdata();
	cout<<"---------------Player details--------------"<<endl;
	p.display();
	return 0;
}
