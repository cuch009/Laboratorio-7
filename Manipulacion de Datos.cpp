#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

void ingresarDatos() {
    string nombreArchivo = "datos.txt";
    ofstream archivo(nombreArchivo.c_str(), ios::app); 

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }
    
    string nombre;
    int edad;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingrese la edad: ";
    cin >> edad;

    archivo << nombre << " " << edad << endl;

    archivo.close();
}

void mostrarDatos() {
    string nombreArchivo = "datos.txt";
    ifstream archivo(nombreArchivo.c_str());

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    string nombre;
    int edad;

    cout << "Datos almacenados en el archivo:" << endl;
    while (archivo >> nombre >> edad) {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }

    archivo.close();
}

int main() {
    ingresarDatos(); 
    mostrarDatos();  
    return 0;
}


