#include<iostream>
using namespace std;
int main(){
	for(int i = 1;i<=5;i++){
		for(int j = i;j<5;j++)
			cout<<" ";
		for(int k = 0;k<2*i-1;k++)
			cout<<"*";
		cout<<endl;
	}
	for(int i = 4;i>=1;i--){
		for(int j = 4;j>=i;j--)
			cout<<" ";
		for(int k = 2*i-1;k>0;k--)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}
