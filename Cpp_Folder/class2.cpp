#include<iostream>
using namespace std;
class new_data{
	private:		
		int x; string y;
	public:
		void setData(); // function prototyping
		void getData(); // function prototyping
};
void new_data::setData(){   //function defination (scope resolutors are used)
	int r; string n;
	cout<< "Enter the name and rollNo.: ";
	cin>>n>>r;
	x = r;
	y = n;
}
void new_data::getData(){
	cout<<"Name: "<<y<<", Roll No.: "<<x<<endl;
}
int main(){
	new_data o1;
	o1.setData();
	o1.getData();
	return 0;
}
