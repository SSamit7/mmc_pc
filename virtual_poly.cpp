#include<iostream>
#include<string.h>
using namespace std;
class techmedia
{
	protected :
		string publisher;
		string author ;
		float price;
		public :
			virtual void read()
			{
				cout<<"Enter name of publisher "<<endl;
				cin>>publisher;
				cout<<"Enter name of author "<<endl;
				cin>>author;
				cout<<"Enter name of price "<<endl;
				cin>>price;
			}
			virtual  void display()
			{
				cout<<"Publisher is      "<<publisher <<"        by      "<<author<<"     for     "<<price<<endl;
			}
};
class book :public techmedia
{
	private :
		int np;
		public :
			void read()
			{
			
				cout<<"No of pages are "<<endl;
				cin>>np;
			}
			void display()
			{
				cout<<"No of pages in book are :"<<np<<endl;
			}
};
class CD :public techmedia
{
	private :
		float size;
		public :
			void read()
			{
			
				cout<<"Enter a size of book (in mb )"<<endl;
				cin>>size;
			}
				void display()
			{
				cout<<"Size of  book are :"<<size<<endl;
			}
};
int main()
{
	techmedia *mediaptr,a;
	book b ;
	CD c;
	mediaptr=&a;
	cout<<"------------Enter Details of the Book ------------"<<endl;
	mediaptr->read();
	mediaptr=&b;
	mediaptr->read();
	mediaptr=&c;
	mediaptr->read();
	cout<<"-----The Details are -------------"<<endl;
		mediaptr=&a;
	mediaptr->display();
		mediaptr=&b;
	mediaptr->display();
		mediaptr=&c;
	mediaptr->display();
	
	
	return 0;
}
