#include<iostream>
using namespace std;

class Parent{ //Abstract Class
	public:
		virtual void func() = 0; //Pure virtual function
};	
class Child : public Parent{
	public:
		void func(){
			cout<<"This is in child class"<<endl;
		}
};
int main(){
	Parent *p = new Child();
	p->func();
}
