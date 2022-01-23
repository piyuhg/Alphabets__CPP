//
#include<iostream>
using namespace std;
enum State {Working = 1, Freezed = 0, Failed = -1};
enum Sate1 {N_Working = 1, N_Freezed = 0, N_Failed = 0};
int main(){
	printf(" %d, %d, %d\n",Working, Freezed, Failed);
	printf(" %d, %d, %d\n",N_Working, N_Freezed,N_Failed);
	cout<<(6%7)<<endl;
	return 0;
}
