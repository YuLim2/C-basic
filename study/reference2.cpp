#include <iostream>
using namespace std;

void plusf(int &ref1){
	ref1++;
}

void transpm(int &ref2){
	ref2 = -ref2;
}

int main(void){

	int val1=10;
	int val2=20;

	plusf(val1);
	transpm(val2);
	cout<<val1<<' '<<val2<<endl;
	return 0;
}