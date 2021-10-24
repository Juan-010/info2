#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char *nombre = "Juan Carlos"; // Produce Warning con Wall (deprecated)
	string nombStr = "Juan Carlos"; // C++ way
	cout << nombre << " " << nombStr << endl;
	return 0;
}
