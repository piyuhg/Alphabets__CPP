#include<iostream>

using namespace std;

template<class T>
void Swap(T &a, T &b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 10,b =20;
	float f1 = 10.2, f2 = 20.4;
	char c1 = 'A', c2 = 'B';

	cout<<a<<" "<<b<<endl;
	Swap(a,b);
	cout<<a<<" "<<b<<endl;
	cout<<f1<<" "<<f2<<endl;
	Swap(f1,f2);
	cout<<f1<<" "<<f2<<endl;
	cout<<c1<<" "<<c2<<endl;
	Swap(c1,c2);
	cout<<c1<<" "<<c2<<endl;
	return 0;
}
