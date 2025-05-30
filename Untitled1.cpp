#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,count=0,marks;
	cout<<"enter the marks";
	cin>>marks;
	while(marks!=-1)
	{
sum +=marks;
count ++;
cin >>marks;
}
float avg =sum/count;
cout<<"the average is"<<avg;
}

