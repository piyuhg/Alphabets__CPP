#include<iostream>
using namespace std;
void change_c(int *c){
	*c = *c + 5;
}
int main(){
	int c;
	cout<<"Enter the value of c: ";
	cin>>c;
	change_c(&c);
	cout<<"Value of c is "<<c<<endl;
	return 0;
}
