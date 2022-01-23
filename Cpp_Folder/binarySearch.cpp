#include<iostream>
#include<algorithm>
using namespace std;

void show(int a[],int arraySize){
	for(int i = 0;i<arraySize;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int a[] = {1,7,8,4,5,6,9,2,3,0};
	int asize = sizeof(a)/sizeof(a[0]);
	cout<<"The array size is: "<<asize<<endl;
       	cout<<"The array is : ";
	show(a,asize);
	cout<<"The max element in the array: "<<*max_element(a,a+asize)<<endl;
	cout<<"Let us find 2 in the array"<<endl;
	cout<<"Binary search needs array to be sorted"<<endl;
	sort(a,a+asize);
	cout<<"The array after sorting is: ";
	show(a,asize);
	cout<<"Now we do the binary search!"<<endl;
	if(binary_search(a,a+asize,2))
		cout<<"Element found in the array"<<endl;
	else
		cout<<"Element not found in the array"<<endl;
	cout<<"Let us find 10 in the array"<<endl;
	if(binary_search(a,a+asize,10))
		cout<<"Element found in the array"<<endl;
	else
		cout<<"Element not found in the array"<<endl;
	return 0;
}
