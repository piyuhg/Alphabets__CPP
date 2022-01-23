#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> g1;
	for(int i = 1;i<= 5;i++)
		g1.push_back(i);
	cout<<"Output begin and end: ";
	for(auto i = g1.begin();i!=g1.end();i++)
		cout<<*i<<" " ;
	cout<<"\noutput of cbegin and cend: ";
	for(auto i = g1.cbegin();i!=g1.cend();i++)
		cout<<*i<<" " ;
	cout<<"\noutput of rbegin and rend: ";
	for(auto ir = g1.rbegin();ir!=g1.rend();ir++)
		cout<<*ir<<" " ;
	cout<<"\noutput of crbegin and crend: ";
	for(auto ir = g1.crbegin();ir!=g1.crend();ir++)
		cout<<*ir<<" " ;
	cout<<"\nusing uninitialised vector"<<endl;
	vector <int> g2(4);
	for(auto i = g2.begin();i!=g2.end();i++)
		cout<<*i<<" " ;
	cout<<endl;

	return 0;
}
