#include<iostream>
using namespace std;
class example{
	private:
		string name;
	public:
		void setName(string x){
			name = x;
		}
		void getName(){
			cout<<name<<endl;
		}
};
int main(){
	example e;
	e.setName("Piyush");
	e.getName();
	return 0;
}
