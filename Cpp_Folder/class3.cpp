#include<iostream>
using namespace std;

class student{
	private:
		int x;
		string y;
	public:
		void set();
		void get();
};
void student::set(){
	int x1;
	string y1;
	cout<<"Enter the name: ";
	cin>>y1;
	y = y1;
	cout<<"Enter the number: ";
	cin>>x1;
	x = x1;
}
void student::get(){
	cout<<"The student details are: "<<endl;
	cout<<"Name: "<<y<<endl;
	cout<<"Number: "<<x<<endl;
}
int main(){
	student s1;
	s1.set();
	s1.get();
	return 0;
}
