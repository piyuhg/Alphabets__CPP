//This is an example of class to class type conversion
#include<iostream>
using namespace std;

class Invent2;
class Invent1{
	private:
		int code, items;
		float price;
	public:
		Invent1(int a, int b, float c){
			code = a;
			items = b;
			price = c;
		}
		void putData(){
			cout<<"Code: "<<code<<endl;
			cout<<"Items: "<<items<<endl;
			cout<<"price: "<<price<<endl;
		}
		int getCode(){return code;}
		float getPrice(){return price;}
		int getItems(){return items;}

		operator float(){
			return (price*items);
		}

		operator Invent2(){
			Invent2 temp;
			temp.code = code;
			temp.value = price*items;
		       	return temp;
		}
};
class Invent2{
	private:
		int code;
		float value;
	public:
		Invent2(){
			code = 0;
			value = 0.0;
		}
		Invent2(int code, float value){
			code = code;
			value = value;
		}
		void putData(){
			cout<<"Code: "<<code<<endl;
			cout<<"Value: "<<value<<endl;
		}
		Invent2(Invent1 p){
			code = p.getCode();
			value = p.getItems()*p.getPrice();
		}
};
int main(){
	Invent1 s1(40,50,1.210);
	Invent2 d1;
	float total_value = s1;
	d1 = s1;
	cout<<"Product Details - Invent1 Type"<<endl;
	s1.putData();
	cout<<"Stock Value: ";
	cout<<total_value<<endl;
	cout<<"\nProduct Details - Invent2 Type"<<endl;
	d1.putData();
	return 0;
}
