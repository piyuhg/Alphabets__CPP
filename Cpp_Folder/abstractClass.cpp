#include<iostream>
using namespace std;

class Polygon{
	protected:
		int width, height;
	public:
		void set_values(int a, int b){
			width = a;
			height = b;
		}
		virtual int area() = 0;
		void printArea(){
			cout<<this->area()<<endl;
		}
};
class Rectangle: public Polygon{
	public:
		int area(void){
			return (width*height);
		}
};

class Triangle: public Polygon{
	public:
		int area(void){
			return (width*height);
		}
};

int main(){
	Rectangle rect;
	Triangle trgl;
	Polygon *polyp1 = &rect;
	Polygon *polyp2 = &trgl;
	polyp1->set_values(4,5);
	polyp2->set_values(5,7);
	polyp1->printArea();
	polyp2->printArea();
	return 0;
}
