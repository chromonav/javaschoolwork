#include <iostream>
#include <string.h>

using namespace std;

class student
{
private:
	int phone;
	int marks;

public:
	char addr[100];
	char name[50];

	student()
	{
		phone =22422;
		marks = 98.8;
		cout<<"Phone no is "<<phone<<endl;
		cout<<"Marks are "<<marks<<endl;
	}
	student(char a[], char n[])
	{
		strcpy(addr, a);
		strcpy(name, n);
		cout<<"Address is "<<addr<<endl;
		cout<<"Name is "<<name<<endl;
	}
	void display()
	{
		cout<<"address is "<<addr<<endl;
		cout<<"name is "<<name<<endl;
	}

};


int main()
{
	student s1, s2;
	student s3("A1/32 Jason Memorial London", "Jaspreet");
	s2=student(s3);
	s2.display();
	return 0;
}
