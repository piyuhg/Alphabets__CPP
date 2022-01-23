#include<iostream>
using namespace std;

class Line{
	private:
		int *ptr;
		int name;
	public:
		int getLength(void);
		Line(int len,int name);
		Line(const Line &obj,int name);
	//	void displayLine();
		~Line();
};
Line::Line(int len, int name1){
	cout<<"Normal Constructr allocating ptr"<<endl;
	ptr = new int;
	*ptr = len;
	name = name1;
}

Line::Line(const Line &ob,int name2){
	cout<<"Copy constructor allocating ptr"<<endl;
	ptr = new int;
	*ptr = *ob.ptr;
	name = name2;
}

Line::~Line(){
	cout<<"Freeing memory! of name: "<<name<<endl;
	delete ptr;
}

int Line::getLength(){
	return *ptr;
}

void displayLine(Line obj){
	cout<<"Length of Line: "<<obj.getLength()<<endl;
}

int main(){
	cout<<"Line 1"<<endl;
	Line line1(10,5);
	cout<<"Line 2"<<endl;
	Line line2(line1,6);
	cout<<"Line 3"<<endl;
	displayLine(line1);
	cout<<"Line 4"<<endl;
	displayLine(line2);

	return 0;
}

/*class Point{
	private:
		int x,y;
	public:
		Point(int x1,int y1){
			x = x1;
			y = y1;
		}
		Point(const Point &p2){
			x = p2.x;
			y = p2.y;
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
		void updateX(int x1){
			x = x1;
		}
		void updateY(int y1){
			y = y1;
		}
};
int main(){
	Point p1(20,25);
	Point p2(p1);
	
	cout<<"P1(x)="<<p1.getx()<<" P1(Y)="<<p1.gety()<<endl;
	cout<<"P2(x)="<<p2.getx()<<" P2(Y)="<<p2.gety()<<endl;
	p1.updateX(40);

	cout<<"P1(x)="<<p1.getx()<<" P1(Y)="<<p1.gety()<<endl;
	cout<<"P2(x)="<<p2.getx()<<" P2(Y)="<<p2.gety()<<endl;
	return 0;
}*/

