#include<iostream>
using namespace std;
int main(){
	static int j = 10;
	j++;
	cout<<j<<endl;
	static int i = j + 50;
	cout<<i<<endl;
	return 0;
}
