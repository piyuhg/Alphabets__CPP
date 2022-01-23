#include<iostream>
using namespace std;
int main(){
	//float a;int b; works fine as expected
	//int a;float b; on giving input as 10.4 for "a" the output was given as: a=10 and b=.5
	//float a, b; this works fine for input and output values
       	//int a,b;
	//on taking the a and b as input and giving the input as 10.4 for a, output was given as : a=10 b = 0	
	cout<<"Enter a: "<<endl;
	cin>>a;
	cout<<"Enter b: :"<<endl;
	cin>>b;
	cout<<"A is"<<a<<"and B is"<<b<<endl;
	return 0;
}
