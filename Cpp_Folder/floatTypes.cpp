#include<iostream>
using namespace std;
int main(){
	double a = 4.223234232;
	double b = 2323.0;

	//Specifying Precision
	cout.precision(4);

	cout<<"Normal values of floating point numbers \na =";
	cout<<a<<"\n"<<b<<"\n";

	//printing values using scientific (till 4)
	//after 4, exponent is used
	cout<<"Values using scientific are: "<<scientific<<endl;
	cout<<a<<"\n"<<b<<"\n";

	//printing values using hexfloat(till 4)
	cout<<"Values using hexfloat are: "<<hexfloat<<endl;
	cout<<a<<"\n"<<b<<"\n";

	//printing values using defaultFloat(till 4)
	//same as normal
	cout<<"Values using hexfloat are: "<<defaultfloat<<endl;
	cout<<a<<"\n"<<b<<"\n";
	
	return 0;
}
