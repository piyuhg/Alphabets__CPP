#include<iostream>
using namespace std;
void update(int *a,int *b){
	*a = (*a)*(*b);
	*b = (*a)/(*b)/(*b);
}
int main(){
	int a, b;
	cin>>a>>b;
	update(&a,&b);
	cout<<a<<" "<<b<<endl;
	return 0;
}
