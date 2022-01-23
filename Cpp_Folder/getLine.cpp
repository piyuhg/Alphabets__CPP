#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	cout<<"Enter your name: ";
	getline(cin,name);

	cout<<"Hello "<<name<<endl;
	
	string name1;
	cout<<"Enter your name: ";
	cin>>name1;
	cout<<"Hello "<<name1<<endl;

	return 0;
}
