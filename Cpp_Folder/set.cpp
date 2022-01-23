//unique and sorted values
//use greater<int> for using in decreasing order
#include<iostream>
#include<set>
#include<iterator>

using namespace std;

/*void show_set(set <int,greater<int>> s){
	set <int, greater <int>>::iterator it;
	cout<<"Set is: ";
	for(it = s.begin();it!=s.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}*/
void show_set(set <int> s){
	set <int>::iterator it;
	cout<<"Set is: ";
	for(it = s.begin();it!=s.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}
int main(){
//	set <int, greater <int>> s1;
	set <int> s1;
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(50);
	s1.insert(20);
	s1.insert(50);
	s1.insert(10);

	show_set(s1);
	set <int> s2(s1.begin(), s1.end());
	show_set(s2);

	cout<<"Removing elements less than 30"<<endl;
	s2.erase(s2.begin(),s2.find(30));
	show_set(s2);

	int num = s2.erase(50);
	cout<<"s2.erase(50)"<<endl;
	cout<<num<<" removed"<<endl;
	show_set(s2);
	return 0;
}
