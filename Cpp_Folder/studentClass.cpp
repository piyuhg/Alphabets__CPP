#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int age;
		int roll;
	public:
		void setData(string n,int a, int r);
		void getData();
};
void Student::setData(string n, int a, int r){
	name = n;
	age = a;
	roll = r;
}
void Student::getData(){
	cout<<"Name: "<<name<<" Age: "<<age<<" Roll: "<<roll<<endl ;
}
int main(){
	Student s1,s2,s3,s4,s5;
	s1.setData("Piyush",20,46);
	s2.setData("Manisha",21,36);
	s3.setData("Nitin",21,45);
	s4.setData("Namita",21,42);
	s5.setData("Nilesh",20,44);
	s3 = s5;
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
	return 0;
}
