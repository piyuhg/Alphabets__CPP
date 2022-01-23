#include<iostream>
using namespace std;

class Complex{
	private:
		int real, imag;
	public:
		Complex(int x = 0, int y = 0){
			real = x;
			imag = y;
		}
		Complex operator + (Complex const &obj){
			Complex c0;
			c0.real = obj.real + real;
			c0.imag = obj.imag + imag;
			return c0;
		}
		void print(){
			cout<<real<<" + i"<<imag<<endl;
		}
};
int main(){
	Complex c1(2,4), c2(3,4);
	Complex c3 = c1 + c2;
	c3.print();
}
