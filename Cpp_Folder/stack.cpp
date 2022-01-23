#include<iostream>
#define SIZE 10
using namespace std;
static int top = -1;
class Stack{
	private: 
		int arr[SIZE];
	public:
		void push(int item);
		void pop();
		void peep();
};
void Stack::push(int item){
		if(top==SIZE-1)
			cout<<"Overflow Occured"<<endl;
		else{
			arr[++top] = item;
			cout<<"The element successfully pushed into the stack"<<endl;
		}
}
void Stack::pop(){
		if(top<0)
			cout<<"Underflow Occured"<<endl;
		else{
			cout<<arr[top--]<<endl;
			cout<<"Element succesfully popped from the stack"<<endl;
		}
}
void Stack::peep(){
		if(top<0)
			cout<<"Empty stack cannot be peeped"<<endl;
		else
			cout<<arr[top]<<endl;
}
int main(){
	char choice;
	int ch,item;
	Stack st;
	do{	
		cout<<"-----------------------Stack Operations-----------------"<<endl;
		cout<<"Enter your choice for operations: "<<endl;
		cout<<"1:PUSH	2:POP	3:PEEP	4:EXIT	-->Your Choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter the element you want to push: ";
				cin>>item;
				st.push(item);
				break;
			case 2:
				st.pop();
				break;
			case 3: 
				st.peep();
				break;
			case 4: 
				exit(0);
				break;
			default:
				cout<<"Enter valid choice (1-4)";
		}
	cout<<"Do you want to continue(y/n): ";
	cin>>choice;
	}while(choice=='y'||choice=='Y');
	cout<<"End of program"<<endl;
	return 0;
}
