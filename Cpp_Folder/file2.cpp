#include<iostream>
//#include<string>
using namespace std;
int main(){
	cout<<"Hello World"<<endl; // this will skip 6 places from starting of the string
	cout<<6+"123456789.12345678"<<endl; //this will also skip the 6 places from starting of the string
	//string a = "Hello world";
	//cout<<6+a<<endl; this generated error;
	char a[20] = "hello world";
	cout<<a-5<<endl;
	return 0;
}
