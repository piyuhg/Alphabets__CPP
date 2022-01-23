#include<iostream>

using namespace std;
class Node{
	public:
		Node *next;
		int data;
		Node();
		Node(int data){
			this->data = data;
		}
};
class LinkedList{
	private:
		int length ;
		Node *head;
	public:	
		LinkedList(){
			this->length = 0;
			this->head = NULL;
		}
		~LinkedList(){
			Node *temp = this->head, *prev = NULL;
			while(temp->next!=NULL){
				cout<<" "<<temp->data;
				prev = temp;
				temp = temp->next;
				delete prev;
			}
			cout<<endl;
			delete temp;
		}

		void addBeg(int data){
			cout<<"addBeg() Called"<<endl;
			Node *newNode = new Node(data);
			newNode->next = this->head;
			this->head = newNode;
			this->length++;
			this->display();
		}

		void addEnd(int data){
			cout<<"addEnd() Called"<<endl;
			Node *newNode = new Node(data);
			if(this->head==NULL){
				this->head = newNode;
				cout<<"Head Created"<<endl;
			}
			else{
				Node *temp = this->head;
				while(temp->next!=NULL)
				temp = temp->next;
				temp->next=newNode;
			}
			this->length++;
			this->display();
		}

		void delBeg(){
			cout<<"delBeg() Called"<<endl;
			if(this->head==NULL)
				cout<<"Deletion Not Possible : Empty List"<<endl;
			else if(this->head->next == NULL){
				this->head = NULL;
				this->length--;
			}
			else{
				Node *temp = this->head;
				this->head = this->head->next;
			       	delete temp;
				this->length--;
			}
			this->display();
		}

		void delEnd(){
			cout<<"delEnd() Called"<<endl;
			if(this->head==NULL)
				cout<<"Deletion Not Possible: Empty List"<<endl;
			else if(this->head->next==NULL){
				this->head = NULL;
				this->length--;
			}
			else{
				Node *temp = this->head;
				Node *prev;
				while(temp->next != NULL){
					prev = temp;
					temp = temp->next;
				}
				prev->next = temp->next;
				delete temp;
				this->length--;
			}
			this->display();
		}

		void display(){
			Node *temp = this->head;
			while(temp!=NULL){
				cout<<" "<<temp->data;
			      	temp = temp->next;
			}
			cout<<"\nTotal No. of nodes: "<<this->length<<endl;	
		}	
};
int main()
{
	LinkedList *ll = new LinkedList();
	ll->addBeg(1);
	ll->addBeg(2);
	ll->addEnd(3);
	ll->delBeg();
	ll->addBeg(4);
	ll->addEnd(5);
	ll->delEnd();
	ll->delEnd();
	ll->delEnd();
	ll->delEnd();
	ll->delEnd();
	ll->delEnd();
	ll->addEnd(5);
	return 0;
}

