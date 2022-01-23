#include<iostream>
using namespace std;
int j {10};
int main(){
	cout<<"Sie of char: "<<sizeof(char)<<endl;
	cout<<"Sie of int: "<<sizeof(int)<<endl;
	cout<<"Sie of short int: "<<sizeof(short int)<<endl;
	cout<<"Sie of long int: "<<sizeof(long int)<<endl;
	cout<<"Sie of float: "<<sizeof(float)<<endl;
	cout<<"Sie of double: "<<sizeof(double)<<endl;
	cout<<"Sie of wcahr_t: "<<sizeof(wchar_t)<<endl;
	int j {5};
	int a[5] {1,2,3,4,'\0'};
	for(int k = 0;k<5;k++)
		cout<<a[k]<<endl;
	int c {17};
	cout<<c<<endl;
	//int c {20};
	//cout<<c<<endl;
	cout<<a<<j<<endl;	
	return 0;
}
