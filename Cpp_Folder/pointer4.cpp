#include<iostream>
using namespace std;
int main(){
	int *ptr1, ptr2;
	int *ptr3, ptr4;
	int a = 10;
	ptr1 = &a;
	ptr2 = *ptr1 + *ptr1;
	ptr3 = &a;
	ptr4 = a*(*ptr3);
	cout<<*ptr1<<" "<<ptr2<<" "<<*ptr3<<" "<<ptr4<<endl;
	return 0;
}
