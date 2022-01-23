#include<iostream>
using namespace std;
struct student{
	char a,e,f,g,h;
	char b;
	int c;
	int d;
	double i;
};
int main(){
	student s;
	cout<<sizeof(s)<<endl;
	cout<<sizeof(student)<<endl;
	return 0;
}
