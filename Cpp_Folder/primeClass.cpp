#include<iostream>
using namespace std;
class PrimeCheck{
	private:
		float input;
	        int prime, notPrime;
	public:
		void checkPrime(){
			cout<<"Enter the number to be checked: ";
			cin>>input;
			int flag = 0;
		 	int input1 = input;
			float check = input - input1;
			if(check !=0){
				cout<<"Enter integer values only!"<<endl;
				return;
			}
			
			if(input1 <= 1)
				flag=1;
			for(int i = 2;i<=input1/2;i++){
				if(input1%i==0){
					flag = 1;
					break;
				}
			}
			if(flag==1){
				cout<<"Entered number is not a Prime number"<<endl;
				notPrime = input1;
			}else{
				cout<<"The Entered number is a prime number!"<<endl;
				prime = input1;
			}
		}
};
int main(){
	PrimeCheck p;
	p.checkPrime();
	return 0;
}
