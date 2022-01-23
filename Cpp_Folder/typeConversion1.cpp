//This is an example of basic to class type conversion

#include<iostream>
using namespace std;

class Time{
	int hrs;
	int mins;
	public:
		Time(int t){
			hrs = t/60;
			mins = t%60;
			cout<<"This is called"<<endl;
		}
		Time(){
			hrs = 0;
			mins = 0;
			cout<<"Default called"<<endl;
		}
		void display(){
			cout<<" The min: "<<mins<<" and the hours are: "<<hrs<<endl;
		}
};
int main(){
	Time t1;
	int duration = 85;
	t1 = duration;			//type conversion....parameterisez constructor was called implicitly
	t1.display();
}
	
