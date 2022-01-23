#include<iostream>
using namespace std;
//enum that takes 16 bits
enum smallenum: int16_t { a,b,c};

//color may be red(value 0), yellow(value 1), green(value 20), or blue(value 1)
enum color {red, yellow, green = 20, blue};

//altitude may be altitude::high or altitude::low
enum class altitude: char { high = 'h', low = 'l',};//c++ allows extra comma

//the constants d is 0, the constant e is 1, the constant f is 3
enum { d, e, f = e+2};

//enumeration types(both scoped and unscoped) can have overloaded operators
std::ostream& operator<<(std::ostream& os, color c){
       switch(c){
	       case red:	os<<"red";
	       			break;		
	       case yellow:	os<<"yellow";
				break;
	       case blue:	os<<"blue";
				break;
	       case green:	os<<"green";
				break;
	       default:		os.setstate(std::ios_base::failbit);
       }
       return os;
}
std::ostream& operator<<(std::ostream& os, altitude al){
	return os<<static_cast<char>(al);
}
int main(){
	color col =red;
	altitude a;
	a = altitude::low;

	std::cout<<"col = "<<col<<"\n"<<"a = "<<a<<"\n"<<"f = "<<f<<"\n";
}
