#include<iostream>
using namespace std;

class Point{
	private:
		int x;
	public:
		void setX(int x){
			this->x = x;
		}
		friend void getX(Point p1); //can access all the things of the class, but class cannot access friend function within it.
};
void getX(Point p1){ //for definatio no need of scope resolution
	cout<<"X is "<<p1.x<<endl;
}
int main(){
	Point p1;
	p1.setX(5);
	getX(p1);
}
