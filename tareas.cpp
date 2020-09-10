#include <iostream>

using namespace std;

struct tripulante{

    string nombre;
    string Ubicacion;
    int dificultad;
    int duracion;
    char tipo;

};

int nTareas = 4;

void LeerDatos(tripulante[], int);
int TotalSegundos(tripulante[], int);

int main (){

    cout << "\nTienes 4 tareas a realizar" << endl; 

    tripulante informacion[nTareas];

    LeerDatos(informacion, nTareas);

    cout << "\nCompletar misiones de dificultad 4 o 5 te llevara: " << TotalSegundos(informacion, nTareas) << " segundos" << endl;

    return 0;
}

void LeerDatos(tripulante *informacion, int nTareas){

    cout << "Proceda a ingresar los datos de cada tarea: " << endl;

    for (int i = 0; i < nTareas; i++){

        cout << "\nNombre de la tarea: ";
        getline(cin, informacion[i].nombre, '\n');

        cout << "Ubicacion de la tarea: ";
        getline(cin, informacion[i].Ubicacion, '\n');

        do{ 

            cout << "Dificultad entre 1 y 5: ";
            cin >> informacion[i].dificultad;

        }       
        while(informacion[i].dificultad <= 0 || informacion[i].dificultad > 5);

        do{ 

            cout << "Duracion en segundos exactos: ";
            cin >> informacion[i].duracion;

        }       
        while(informacion[i].duracion <= 0);

        do{

        cout << "Tipo (R - reparar, C - Clasificar, O - otros): ";
        cin >> informacion[i].tipo;   

        }
        while(informacion[i].tipo != 'R' && informacion[i].tipo != 'C' && informacion[i].tipo != 'O');

        cin.ignore();  

    } 
}

int TotalSegundos(tripulante *informacion, int nTareas){

    int total = 0;

    for (int i = 0; i < nTareas; i++){
        if (informacion[i].dificultad > 3){
          total += informacion[i].duracion;
        }

    }

    return total;

}