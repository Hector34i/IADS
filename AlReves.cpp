#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    cout << "Invertir numero"<<endl<<endl;
    int x, y = 0;
    cout<< "numero - >";
    cin >> x ;
    while(x !=0){
        y = y * 10 + x % 10;
        x = x / 10;
            
    }
    cout<<endl;
    cout<<"El numero invertido - >"<<y;
    return 0;

}