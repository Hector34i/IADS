#include <iostream>
using namespace std;
int num;
int main(){
	
	div_t resultado;

	while (1==1){ 
	
	cout<<"ingrese un numero para vereficar si es Primo o Compuesto" << end1;

	
	cin >> num;

	bool primo = true;

	for(int i = 2 ; i < num ; i++){
		
		if(num % i == 0) primo = false;
	
	}
	if (primo == true) cout<<"el numero es primo";
	else cout<<"el numero no es primo";

	cin.get();
	
	cin.ignore();
	}
	

	return 0;
}