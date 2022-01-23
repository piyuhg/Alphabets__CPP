#include<iostream>
using namespace std;
int main(){
	for(int i = 1;i<=9;i++){
		if(i==5){
			for(int j = 1;j<=4;j++)
				cout<<" ";
			cout<<"*"<<endl;
		}
		else{
			for(int j = 1;j<=9;j++){
				if(j==10-i || j == i)
				       cout<<"*";
				else
				cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
