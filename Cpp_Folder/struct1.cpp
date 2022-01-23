#include<iostream>
using namespace std;

struct Person{
	char name[50] {"DEFAULT"};
	int age {0};
	float salary {0};

	void getname(){
		cout<<"\nName: "<<name<<endl;
	}
};

int main(){
	Person p1,p2;
	cout<<"Enter your name: ";
	cin.get(p1.name,50);
	cout<<"Enter your age: ";
	cin>>p1.age;
	cout<<"Enter yout salary: ";
	cin>>p1.salary;
	p1.getname();
	cout<<"Displaying Information"<<endl;
	cout<<"Name: "<<p1.name<<endl;
	cout<<"Age: "<<p1.age<<endl;
	cout<<"Salary: "<<p1.salary<<endl;

	cout<<"Displaying Information"<<endl;
	cout<<"Name: "<<p2.name<<endl;
	cout<<"Age: "<<p2.age<<endl;
	cout<<"Salary: "<<p2.salary<<endl;
	return 0;
}
