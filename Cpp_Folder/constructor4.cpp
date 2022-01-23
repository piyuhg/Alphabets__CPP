#include<iostream>
using namespace std;

class Point{
	private:
		int *x;
	public:
	/*	Point(){
			cout<<"Default Memory Allocation"<<endl;
			 x = new int;
			*x = 10; 
		}
	*/	Point(int x1){
			cout<<"Memory allocattinng"<<endl;
			x = new int; 
			*x = x1;
			cout<<"Memory allocated"<<endl;
		}
		~Point(){
			cout<<"Value of x is: "<<*x<<endl;
			cout<<"Address of x is: "<<x<<endl;
			cout<<"Freeing Memory"<<endl;
			delete x;
			cout<<"Memory freed"<<endl;
		}
};
int main(){
	Point p0;
	Point p1(5);
	Point p2(4);
	return 0;
}
