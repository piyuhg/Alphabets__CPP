#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> //for accumulation operation

using namespace std;

void show_vector(vector <int> vect){
	vector <int>::iterator it;
	for(it = vect.begin();it!=vect.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}
int main(){
	int arr[] = {1,4,8,9,7,6,3,5,0,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector <int> vect(arr,arr+n);

	cout<<"Vector is: ";
	show_vector(vect);

	sort(vect.begin(),vect.end()); //sorting
	cout<<"The array after sorting is: ";
	show_vector(vect);

	reverse(vect.begin(),vect.end()); //reversing
	cout<<"The reverse array is: ";
	show_vector(vect);

	cout<<"The maximum value in the array is: ";
	cout<<*max_element(vect.begin(),vect.end())<<endl;

	cout<<"The minimum value in the array is: ";
	cout<<*min_element(vect.begin(),vect.end())<<endl;
	
	cout<<"The accumulated sum of array is: ";
	cout<<accumulate(vect.begin(),vect.end(),0)<<endl;

	vect = {20,15,35,14,40,20,16,20};
	show_vector(vect);

	cout<<"Count Occurences of 20 in the vector: ";
	cout<<count(vect.begin(),vect.end(),20);

	find(vect.begin(),vect.end(),5)!=vect.end()?		//find returns the last address of the iterator of value not found
		cout<<"Element found"<<endl:
		cout<<"Element not found"<<endl;

	return 0;
}


