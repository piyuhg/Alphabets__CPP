#include<iostream>
using namespace std;

class construct{
	public:
		int a, b;
		construct(){
			cout<<"Constructor called: ";
			a = 10;
			b = 20;
			cout<<"Values set using Constuctor"<<endl;
		}
};
int main(){
	construct c;
	cout<<"a: "<<c.a<<" b: "<<c.b<<endl;
	return 0;
}
