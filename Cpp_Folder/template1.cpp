#include<iostream>

using namespace std;

template <class type, class type2>
type2 max1(type a,type2 b){
	if(a>b) return a;
	else return b;
}
int main(){
	cout<<"Max no is: "<<max1(10.2,15.01)<<endl;
	cout<<"Max char is: "<<max1('A','B')<<endl;
	cout<<"Max float is: "<<max1(10.5,10.6)<<endl;
	cout<<"max of two values is: "<<max1(20.7,13)<<endl;
	cout<<"max of two values is: "<<max1(20,130.6)<<endl;
	cout<<"max of two values is: "<<max1(20.7,27)<<endl;
	return 0;
}
