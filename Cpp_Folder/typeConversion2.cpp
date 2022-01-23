//This is an exmaple of class to basic type conversion
#include<iostream>
using namespace std;
const float meterToFloat = 3.280833;

class Distance{
	int feet;
	float inches;
	public:
		Distance(){
			inches = 0.0;
			feet = 0;
		}
		Distance(int f, float i){
			feet = f;
			inches = i;
		}
		operator float(){			//This is responsible for converting the class values to the float value
			float feetInFractions = inches/12;
			feetInFractions += feet;
			return (feetInFractions/meterToFloat);
		}
};
int main(){
	int feet;
	float inches;
	cout<<"Enter the values in feet and inches. "<<endl;
	cout<<"Feet: ";
	cin>>feet;
	cout<<"Inches: ";
	cin>>inches;
	Distance dist(feet,inches);
	float meters = dist; // this line calls the float() function decalared above in the class 
	cout<<"Converted distance in meters: "<<meters<<endl;
}
