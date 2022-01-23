#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void showlist(list <int> l){
	list <int> :: iterator it;
	for(it=l.begin();it!=l.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}
int main(){
	list <int> l1,l2;
	for(int i = 0;i<10;i++){
		l1.push_back(2*i);
		l2.push_front(3*i);
	}
	cout<<"List 1 is: ";
	showlist(l1);
	cout<<"List 2 is: ";
	showlist(l2);
	cout<<"l1.front(): "<<l1.front()<<endl;
	cout<<"l1.back(): "<<l1.back()<<endl;
	cout<<"l1.pop_front()"<<endl;
	l1.pop_front();
	showlist(l1);
	cout<<"l2.pop_back()"<<endl;
	l2.pop_back();
	showlist(l2);
	cout<<"l1.reverse()"<<endl;
	l1.reverse();
	showlist(l1);
	cout<<"l2.sort()"<<endl;
	l2.sort();
	showlist(l2);
	cout<<"l1.size(): "<<l1.size()<<endl;
	l1 = l2;
	showlist(l1);
	list <int> l3(3);
	showlist(l3);
	return 0;
}
