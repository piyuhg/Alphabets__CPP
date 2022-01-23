#include<iostream>
using namespace std;
void update(int *a , int *b){
	*a = *a + *b;
	*b = *a - *b - *b;
	if(*b < 0)
		*b = *b*(-1);
}
int main(){
	int a, b;
	int *pa = &a, *pb = &b;

	cin>>a;
	cin>>b;
	update(pa,pb);
	cout<<a<<endl;
	cout<<b<<endl;

	return 0;
}
