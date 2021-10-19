#include <iostream>	
using namespace std;
int divisionEntera(int &, int &, int &);
int main(){
	int a, b, res; 
	cout << "Ingrese 2 enteros (Dividendo y Divisor): ";
	cin >> a >> b;
	int &refa = a, &refb = b, &refres = res;
	if (divisionEntera(refa, refb, refres) == 0){
		cout << a << " / " << b << " = " << res << endl;
		return 0;
	}
	else{
		cout << "Ha ocurrido un error, intente nuevamente." << endl;
		return 1;
	}
}
int divisionEntera(int &num, int &denom, int &res){
	if (denom == 0)
		return -1;
	else{
		res = num / denom;
		return 0;
	}
}

