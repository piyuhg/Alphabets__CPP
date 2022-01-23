#include<iostream>
using namespace std;
/*void swap(int x, int*y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}*/
void swap(int &x,int &y){
	cout<<x<<endl;
	cout<<y<<endl;
	int temp = x;
	x = y;
	y = temp;
	return;
}
int main(){
	int a = 5, b = 10;
	int *pa = &a;
	int *pb = &b;
	//swap(&a,&b);
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}
