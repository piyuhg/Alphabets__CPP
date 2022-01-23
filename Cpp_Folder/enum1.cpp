#include<iostream>
using namespace std;
enum week{Mon=1,Tue=Mon+5,Wed = 1};
int main(){
	week day;
	day=Wed;
	printf("%d\n",day);
	return 0;
}
