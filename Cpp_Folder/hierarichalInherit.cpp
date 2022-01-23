#include<iostream>
using namespace std;

class parrent{
	private:
		int x;
	public:
		parrent(){
			cout<<"Constructor of parrent Called"<<endl;
			x = 5;
		}
		void setX(int x){
			this->x = x;
		}
		void getX()
		{	
			cout<<"X is "<<x<<endl;
		}
		~parrent(){
			cout<<"parrent Destructor called"<<endl;
		}
};
class base2:public parrent{
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
class child1 : public parrent {
	private:
		int z;
	public:
		child1(){
			cout<<"Constructor of child1 Called"<<endl;
			z = 15;
		}
		void setZ(int z){
			this->z = z;
		}
		void getZ(){
			cout<<"Z is "<<z<<endl;
		}
		~child1(){
			cout<<"child1 Destructor called"<<endl;
		}
};
class child2 : public child1, public base2, public parrent {
	private:
		int w;
	public:
		child2(){
			cout<<"Constructor of child2 Called"<<endl;
			w = 15;
		}
		void setW(int w){
			this->w = w;
		}
		void getW(){
			cout<<"W is "<<w<<endl;
		}
		~child2(){
			cout<<"child Destructor called"<<endl;
		}
};
int main(){
	child2 c1;
/*	c1.setZ(1);
	c1.setX(3);
	c1.setY(2);
*/	c1.child1::getX();
	c1.getY();
	c1.getZ();
	return 0;
}

