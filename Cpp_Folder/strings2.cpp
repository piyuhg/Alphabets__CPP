#include<iostream>
#include<string>
using namespace std;

int main(){
	string a = {'H','e','l','l','o',' ','W','o','r','l','d'};
	cout<<a<<endl;
	a[0] = 'O';
	cout<<a<<endl;
	cout<<"The length of the string is : "<<a.length()<<endl;
	return 0;
}
