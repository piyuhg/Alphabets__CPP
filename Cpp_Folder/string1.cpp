#include<iostream>
#include<string>
using namespace std;
int main(){
	string phrase = "Hello World";
	cout<<phrase<<endl;

	phrase[0] = 'O';
	cout<<phrase<<endl;

	cout<<"The length of the string is: "<<phrase.length()<<endl;
	cout<<"Finding 'e' in phrase: "<<phrase.find('e')<<endl;//returns position of e
	cout<<"Finding Hello in phrase:"<<phrase.find("llo")<<endl;
	cout<<"Finding Hello in phrase after index position 1: "<<phrase.find("llo",1)<<endl;

	cout<<"Indexing using Substring: "<<endl;
	cout<<phrase.substr(3,8)<<endl;

	return 0;
}
