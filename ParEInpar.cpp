#include <iostream>
#include <cstdlib>

using namespace std;
int numero;
int main(){
div_t resultado;
while (1==1){
cout << "Ingrese un numero para verificar si es par" << endl;
cin >> numero;
resultado=div(numero,2);
if (resultado.rem>0);
{
cout << numero << " Es impar" << endl;
}
else {
    cout << numero << " Es par" << endl;
}}
cin.get();
cin.ignore();
return 0;
}