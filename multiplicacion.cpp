#include <iostream>

using namespace std;

int multiplicacion(int, int);

int main(){

    cout << "\nMultiplicacion recursiva" << endl << endl;

    int a = 0, b = 0;

    cout << "Digite un numero natural: ";
    cin >> a;

    cout << "Digite otro numero natural: ";
    cin >> b;

    if (a == 0 || a < 0 || b == 0 || b < 0){ //Validar que no se ingrese ningun numero negativo y el cero

        cout << endl << "\t Error" << endl << endl;

    }
    
    cout << "\nEl resultado de la multiplicacion es: " << multiplicacion(a, b);

    return 0;
}

int multiplicacion(int a, int b){

    if (b == 1){

        return a;

    }
    else {

        return a + multiplicacion(a, b-1);

    }


}

