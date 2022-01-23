#include<iostream>
#include<deque>
using namespace std;
void showdq(deque <int> g){
	deque <int> :: iterator it;
	for(it=g.begin();it!=g.end();it++)
		cout<<*it<<endl;
}
int main(){
	deque <int> gquiz;
	gquiz.push_back(10);
	gquiz.push_front(20);
	gquiz.push_back(30);
	gquiz.push_front(40);
	cout<<"The deque gquiz is: "<<endl;
	showdq(gquiz);
	cout<<"The size of the deque is: "<<gquiz.size()<<endl;
	cout<<"gquiz.max_size(): "<<gquiz.max_size()<<endl;
	cout<<"gquiz.at(2): "<<gquiz.at(2)<<endl;
	cout<<"gquiz.front(): "<<gquiz.front()<<endl;
	cout<<"gquiz.back(): "<<gquiz.back()<<endl;
	cout<<"gquiz.pop_front()"<<endl;
	gquiz.pop_front();
	showdq(gquiz);
	cout<<"gquiz.pop_back()"<<endl;
	gquiz.pop_back();
	showdq(gquiz);

	deque <int> gq(3);

	gq[0] = 5;
//	gq[1] = 2;
	gq[2] = 3;
	//	gq[3] = 3;
	gq.push_back(4);
	showdq(gq);
	cout<<"The size of the deque is: "<<gq.size()<<endl;
	cout<<"The max size is: "<<gq.max_size()<<endl;	
	gq = gquiz;
	showdq(gq);
	return 0;
}
