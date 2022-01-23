#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std;

int main(){
	list<string> listOfStr;
	listOfStr.push_back("1");
	listOfStr.push_back("2");
	listOfStr.push_back("3");
	listOfStr.push_back("4");

	//initialize a vector with std::list
	vector<string> vecOfStr(listOfStr.begin(),listOfStr.end());

	for(string str:vecOfStr)
		cout<<str<<endl;

	return 0;
}
