#include<iostream>
using namespace std;
 class Example{
	 private:
		 int x;
		 string y;
	 public:
		 Example();
		 Example(int x1){
			 cout<<"Constructor called 1"<<endl;
			 x = x1;
			 y = "Not Entered";
		 }
		 Example(int x1, string y1){
			 cout<<"Constructor called 2"<<endl;
			 x = x1;
			 y = y1;
		 }
		 ~Example(){
			 cout<<"Destructor Called"<<endl;
		 }
		 void display(){
		 	cout<<x<<"  "<<y<<"  "<<endl;
		 }
 };
/*Example::Example(){
	cout<<"Called"<<endl;
	x = 50;
	y = "GUPTA";
}*/
int main(){
	Example e1(15);
	Example e2(15,"PIYUSH");
	Example e3;
	return 0;
}

