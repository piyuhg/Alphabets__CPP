#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double pi = 13.141596;
	cout<<setprecision(4);
	cout<<pi<<endl;
	cout<<setprecision(9)<<pi<<endl;
	cout<<fixed;
	cout<<setprecision(5)<<pi<<endl;
	cout<<setprecision(9)<<pi<<endl;
	return 0;
}

