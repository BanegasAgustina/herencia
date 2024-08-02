#include <bits/stdc++.h>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona(string, int);
    void mostrarPersona();
};

class Alumno : public Persona {
private:
    string codigoAlumno;
    float notaFinal;

public:
    Alumno(string, int, string, float);
    void mostrarAlumno();
};

class Docente : public Persona {
private:
    string cuil;
    string titulo;

public:
    Docente(string, int, string, string);
    void mostrarDocente();
};

Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal)
    : Persona(_nombre, _edad) {
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

Docente::Docente(string _nombre, int _edad, string _cuil, string _titulo)
    : Persona(_nombre, _edad) {
    cuil = _cuil;
    titulo = _titulo;
}

void Persona::mostrarPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Alumno::mostrarAlumno() {
    mostrarPersona();
    cout << "Codigo de alumno: " << codigoAlumno << endl;
    cout << "Nota Final: " << notaFinal << endl;
}

void Docente::mostrarDocente() {
    mostrarPersona();
    cout << "CUIL: " << cuil << endl;
    cout << "Titulo: " << titulo << endl;
}

int main() {
    Alumno alumno1("Silvana", 38, "9038130948", 8.7);
    alumno1.mostrarAlumno();
    cout << "------------------------------------------------" << endl;
    Alumno alumno2("Jeremias", 37, "19023849023", 9.9);
    alumno2.mostrarAlumno();
    cout << "------------------------------------------------" << endl;
    Docente docente1("Carlos", 45, "20-12345678-9", "Profesor en Matematicas");
    docente1.mostrarDocente();
    
    return 0;
}
