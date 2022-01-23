#include<iostream>
using namespace std;

class base{
	private:
		int x, y;
	public:
		void set_data(int x, int y){
			this->x = x;
			this->y = y;
		}
		void show_data(){
			cout<<x<<" "<<y<<endl;
		}
};
class child : public base{
	private:
		int z;
	public:
		void showZ(){
			cout<<z<<endl;
		}
		void setZ(int z){
			this->z = z;
		}
};
int main(){
//	base c1; this will give error as we are later exccesing the functions of child class
	child c1;
	c1.set_data(5,10);
	c1.show_data();
	c1.setZ(15);
	c1.showZ();
	return 0;
}
