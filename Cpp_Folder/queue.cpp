#include<iostream>
using namespace std;

#define SIZE 5
static int front = -1;
static int rear =  -1;

class Queue{
	private:
		int arr[SIZE];
	public:
		void enqueue(int item);
		void dequeue();
		void display();
};
void Queue::enqueue(int item){
	if(rear == SIZE-1)
		cout<<"Queue Full: Overflow"<<endl;
	else{
		if(front==-1)
			front = 0;
		arr[++rear] = item;
	cout<<"Element successfully enqueued in the queue"<<endl;
	}
}
void Queue::dequeue(){
	if(front==-1 || front>rear)
		cout<<"Queue Empty: Underflow"<<endl;
	else
		cout<<"Dequeued Element: "<<arr[front++]<<endl;
}
void Queue::display(){
	if(front==-1)
		cout<<"Queue Empty: Underflow";
	else
		for(int i = front;i<=rear;i++)
			cout<<arr[i]<<"<--";
	cout<<endl;
}
int main(){
	Queue q;
	int ch, item;
	char choice;
	cout<<"------------------------Queue Operations---------------------"<<endl;
	do{
		cout<<"Enter your choice of operation: "<<endl;
		cout<<"1: Enqueue	2: Dequeue	3: Peep		4: Exit	--> Your Choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter the element to be enqueued: ";
				cin>>item;
				q.enqueue(item);
				break;
			case 2:
				q.dequeue();
				break;
			case 3:
				q.display();
				break;
			case 4:
				cout<<"End of the Program"<<endl;
				exit(0);
				break;
			default:	
				cout<<"Enter the valid choice: (1-4)"<<endl;
		}
		cout<<"Do you want to continue? (y/n): ";
		cin>>choice;
	}while(choice=='y' ||choice=='Y');
	cout<<"End of the Program"<<endl;
	return 0;
}
