#include <iostream>
using namespace std;

int main(){
	int *ptrInt = new int(1);
	float *ptrFloat = new float(1.1);
	int *vecInt = new int [10];
	cout << *ptrInt << endl;
	cout << *ptrFloat << endl;
	for (int i = 0; i < 9; i++) {
		cout << vecInt[i] << ", ";	
	}
	cout << vecInt[9] << endl;
	return 0;
}
