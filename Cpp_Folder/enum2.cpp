#include<iostream>
using namespace std;
enum year{Jan,year,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
int main(){
	enum year i;
	//int i;
	for(i = Jan; i<Dec; i = static_cast<year>(i+1)){
		cout<<i<<endl;
	}
/*	enum year month;
       	month = Jan;
	printf("%d\n",month);
       	month = Feb;
	printf("%d\n",month);
       	month = Mar;
	printf("%d\n",month);
       	month = Apr;
	printf("%d\n",month);
       	month = May;
	printf("%d\n",month);
       	month = Jun;
	printf("%d\n",month);
       	month = Jul;
	printf("%d\n",month);
       	month = Aug;
	printf("%d\n",month);
       	month = Sep;
	printf("%d\n",month);
       	month = Oct;
	printf("%d\n",month);
       	month = Nov;
	printf("%d\n",month);
       	month = Dec;
	printf("%d\n",month);
*/	return 0;
}
