#include<iostream>
using namespace std;
int main(){
	float f = 3.6;
	int a = f;
	int b = static_cast<int>(f);
	cout<<a<<b<<endl;
	return 0;
}
