#include<iostream>
using namespace std;

class base1{
	private:
		int x;
	public:
		base1(){
			cout<<"Constructor of base1 Called"<<endl;
			x = 5;
		}
		void setX(int x){
			this->x = x;
		}
		void getX()
		{	
			cout<<"X is "<<x<<endl;
		}
		~base1(){
			cout<<"base1 Destructor called"<<endl;
		}
};
class base2{
	private:
		int y;
	public:
		base2(){
			cout<<"Constructor of base2 Called"<<endl;
			y = 10;
		}
		void setY(int y){
			this->y = y;
		}
		void getY()
		{	
			cout<<"Y is "<<y<<endl;
		}
		~base2(){
			cout<<"base2 Destructor called"<<endl;
		}
};
class child : public base1, public base2 {
	private:
		int z;
	public:
		child(){
			cout<<"Constructor of child Called"<<endl;
			z = 15;
		}
		void setZ(int z){
			this->z = z;
		}
		void getZ(){
			cout<<"Z is "<<z<<endl;
		}
		~child(){
			cout<<"child Destructor called"<<endl;
		}
};
int main(){
	child c1;
/*	c1.setZ(1);
	c1.setX(3);
	c1.setY(2);
*/	c1.getX();
	c1.getY();
	c1.getZ();
	return 0;
}
