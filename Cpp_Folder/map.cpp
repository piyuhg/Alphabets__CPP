#include<iostream>
#include<map>
#include<iterator>

using namespace std;
void show_map(map <int,int> m){
	map <int,int>::iterator it;
	cout<<"\t Key \t Element"<<endl;
	for(it = m.begin();it!=m.end();it++)
		cout<<"\t"<<it->first<<"\t"<<it->second<<endl;
}

int main(){
	map<int,int> m1;
	m1.insert(pair <int,int> (1,40));
	m1.insert(pair <int,int> (2,30));
	m1.insert(pair <int,int> (3,60));
	m1.insert(pair <int,int> (4,20));
	m1.insert(pair <int,int> (5,50));
	m1.insert(pair <int,int> (6,10));
	m1.insert(pair <int,int> (7,50));
	cout<<"The map M1 is: "<<endl;
	show_map(m1);
	map<int, int> m2(m1.begin(),m1.end());
	cout<<"The map M2 is: "<<endl;
	show_map(m2);
	cout<<"\n M2 after removal of elements less than key = 3"<<endl;
	m2.erase(m2.begin(),m2.find(3));
	show_map(m2);
	return 0;
}


