#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[]){
	for(int i = 0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int revshow(int a[]){
	for(int i = 9;i>=0;i--)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int a[10] = {1,5,4,6,7,8,9,3,2,0};
	cout<<"The array is: "<<endl;
	show(a);

	sort(a,a+10);

	cout<<"The array after sorting is: ";
	show(a);
	cout<<"The reverse sorted array is: ";
	revshow(a);
	return 0;
}
