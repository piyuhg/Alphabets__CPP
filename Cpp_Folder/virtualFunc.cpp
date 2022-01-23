#include<iostream>
using namespace std;

class A{
	int x = 5;
	public:
		virtual void print(){
			cout<<"Print Base Class "<<x<<endl;
		}
		void show(){
			cout<<"Show Base Class "<<x<<endl;
		}
};
class B: public A{
	int y = 10;
	public:
		virtual void print(){
			cout<<"Print Derived Class "<<y<<endl;
		}
		void show(){
			cout<<"Show Derived Class "<<y<<endl;
		}
};
int main(){
	A *a;
	B b;
	a = &b;
	a->print();
	a->show();
	return 0;

}
