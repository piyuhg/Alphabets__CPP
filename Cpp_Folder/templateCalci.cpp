#include<iostream>

using namespace std;

template <class T>
class Calculator{
	private:
		T a; T b;
	public:
		Calculator(T num1, T num2){
			a = num1;
			b = num2;
		}
		void displayResult(){
			cout<<"The result of addition of the two numbers is: ";
			cout<<add()<<endl;
		}
		T add(){
			return a+b;
		}
};
int main(){
	Calculator <int> calc(5,10);
	calc.displayResult();
	return 0;
}
