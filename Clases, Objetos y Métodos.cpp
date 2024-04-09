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

class Estudiante : public Persona {
private:
    int numeroEstudiante;
    float promedioCalificaciones;

public:
    Estudiante(string n, int e, string o, int numEst, float promCal) 
        : Persona(n, e, o), numeroEstudiante(numEst), promedioCalificaciones(promCal) {}

    void setNumeroEstudiante(int numEst) { numeroEstudiante = numEst; }
    void setPromedioCalificaciones(float promCal) { promedioCalificaciones = promCal; }

    int getNumeroEstudiante() const { return numeroEstudiante; }
    float getPromedioCalificaciones() const { return promedioCalificaciones; }

    void mostrarInformacionEstudiante() const {
        mostrarInformacion(); 
        cout << "Numero de Estudiante: " << numeroEstudiante << endl;
        cout << "Promedio de Calificaciones: " << promedioCalificaciones << endl;
    }
};

int main() {
    Estudiante estudiante1("Juan", 20, "Estudiante", 1234, 8.5);

    cout << "Informacion del Estudiante:" << endl;
    estudiante1.mostrarInformacionEstudiante();
    cout << endl;

    estudiante1.setPromedioCalificaciones(9.0);
    estudiante1.setOcupacion("Becario");

    cout << "Informacion actualizada del Estudiante:" << endl;
    estudiante1.mostrarInformacionEstudiante();
    cout << endl;

    return 0;
}

