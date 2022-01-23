#include<iostream>
using namespace std;
int main(){
	int num = 10;
	cout<<"Enter the length of fibonacci series: ";
	cin>>num;
	cout<<"The Fibonacci Series till "<<num<<" is: ";
	int a = 0, b = 1;
	cout<<a<<" "<<b<<" ";
	for(int i = 0;i<num-2;i++){
		int c = a + b;
		a = b;
		b = c;
		cout<<c<<" ";
	}
	cout<<endl;
	return 0;
}
