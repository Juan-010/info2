#include <iostream>
using namespace std;
int suma(int, int);
float suma(float, float);
int main(){
	int n1, n2;
 	float f1, f2;
	cout << "Ingrese dos enteros: "; 
	cin >> n1 >> n2;
	cout << "Ingrese dos flotantes: "; 
	cin >> f1 >> f2;
	
	cout << "Suma entera: " << suma(n1, n2) << endl
		<< "Suma flotante: " << suma(f1, f2) << endl;
	return 0;
}

int suma(int n1, int n2){
	return n1+n2;
}
float suma(float f1, float f2){
	return f1+f2;
}
