#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    string ocupacion;

public:
    
    Persona(string n, int e, string o) : nombre(n), edad(e), ocupacion(o) {}

    
    void setNombre(string n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setOcupacion(string o) { ocupacion = o; }

    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    string getOcupacion() const { return ocupacion; }

    
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Ocupacion: " << ocupacion << endl;
    }
};

int main() {
    
    Persona persona1("Juan", 30, "Ingeniero");
    Persona persona2("Maria", 25, "Estudiante");

    
    cout << "Informacion de la primera persona:" << endl;
    persona1.mostrarInformacion();
    cout << endl;

    cout << "Informacion de la segunda persona:" << endl;
    persona2.mostrarInformacion();
    cout << endl;

    persona1.setEdad(35);
    persona2.setOcupacion("Programadora");

    cout << "Informacion actualizada de la primera persona:" << endl;
    persona1.mostrarInformacion();
    cout << endl;

    cout << "Informacion actualizadad de la segunda persona:" << endl;
    persona2.mostrarInformacion();
    cout << endl;

    return 0;
}

