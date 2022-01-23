#include<iostream>
using namespace std;
enum class Color {red, green=20 ,blue}; //scoped Enum -->  scope resolutor(::) to be used
//enum Color {red, green=20, blue}; ->> no need or scope resolution
int main(){
	Color r = Color::blue;
	//Color r = blue;
	switch(r){
		case Color::red : cout<<"Red"<<endl;
				  break;
		case Color::green:cout<<"Green"<<endl;
				  break;
		case Color::blue: cout<<"Blue"<<endl;
				  break;
	}
	/*switch(r){
		case red : cout<<"Red"<<endl;
				  break;
		case green:cout<<"Green"<<endl;
				  break;
		case blue: cout<<"Blue"<<endl;
				  break;
	}*/
	//int n = r; --> no need for typecasting 
	int n = static_cast<int>(r); //using scoped enum ->> typecasting is required
	cout<<n<<endl;
}
