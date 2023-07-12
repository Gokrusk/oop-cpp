#include <iostream>
using namespace std;

class Persona
{
protected:
    string nombre, apellidos, DNI, EC;

public:
    Persona(string n, string a, string dn, string ec)
    {
        nombre = n;
        apellidos = DNI;
        EC = ec;
    }
    void cambiarEstadoCivil()
    {
        cout << "Ingrese el nuevo estado civil: ";
        cin >> EC;
    }
    virtual void imprimir() = 0;
};

class Empleados : public Persona
{
protected:
    int anyoCoporacion, numDespacho;

public:
    Empleados(int ac, int nd, string n, string a, string dn, string ec) : Persona(n, a, dn, ec)
    {
        anyoCoporacion = ac;
        numDespacho = nd;
    }
    void reasignarDp()
    {
        cout << "Ingrese el nuevo #despacho: ";
        cin >> numDespacho;
    }
    void imprimir(){};
};

class Estudiante : public Persona
{
private:
    string curso;

public:
    Estudiante(string c, string n, string a, string dn, string ec) : Persona(n, a, dn, ec)
    {
        curso = c;
    }
    void matricular()
    {
        cout << "Ingrese el curso a matricular: ";
        cin >> curso;
    }
    void imprimir()
    {
        cout << "\nNombre: " << nombre;
        cout << "\nApellido: " << apellidos;
        cout << "\nDNI: " << DNI;
        cout << "\nEstado civil: " << EC;
        cout << "\nCurso: " << curso << endl;
    }
};

class Profesor : public Empleados
{
private:
    string departamento;

public:
    Profesor(string d, int ac, int nd, string n, string a, string dn, string ec) : Empleados(ac, nd, n, a, dn, ec)
    {
        departamento = d;
    }
    void cambiarDep()
    {
        cout << "Ingrese el nuevo departamento: ";
        cin >> departamento;
    }
    void imprimir()
    {
        cout << "\nNombre: " << nombre;
        cout << "\nApellido: " << apellidos;
        cout << "\nDNI: " << DNI;
        cout << "\nEstado civil: " << EC;
        cout << "\nDepartamento: " << departamento;
        cout << "\nAnyo incorporacion: " << anyoCoporacion;
        cout << "\nNumero despacho: " << numDespacho << endl;
    }
};

class Servicio : public Empleados
{
private:
    string seccion;

public:
    Servicio(string s, int ac, int nd, string n, string a, string dn, string ec) : Empleados(ac, nd, n, a, dn, ec)
    {
        seccion = s;
    }
    void trasladoSeccion()
    {
        cout << "Ingrese la seccion a trasladar: ";
        cin >> seccion;
    }
    void imprimir()
    {
        cout << "\nNombre: " << nombre;
        cout << "\nApellido: " << apellidos;
        cout << "\nDNI: " << DNI;
        cout << "\nEstado civil: " << EC;
        cout << "\nSeccion: " << seccion;
        cout << "\nAnyo incorporacion: " << anyoCoporacion;
        cout << "\nNumero despacho: " << numDespacho << endl;
    }
};

int main(void)
{
    cout << "\tGESTION DE FACULTAD\n";
    cout << "\t====================\n";
    cout << "\tPROFESOR\n";
    Profesor p1("Informatica", 2003, 304, "Nigell", "Jama", "0850106188", "Soltero");
    p1.cambiarEstadoCivil();
    p1.reasignarDp();
    p1.cambiarDep();
    p1.imprimir();
    cout << "\t====================\n";
    cout << "\tESTUDIANTE\n";
    Estudiante es1("SEGUNDO", "Nigell", "Jama", "0850106188", "Soltero");
    es1.cambiarEstadoCivil();
    es1.matricular();
    es1.imprimir();
    cout << "\t====================\n";
    cout << "\tPERSONAL DE SERVICIO\n";
    Servicio s1("Biblioteca", 2003, 304, "Nigell", "Jama", "0850106188", "Soltero");
    s1.cambiarEstadoCivil();
    s1.reasignarDp();
    s1.trasladoSeccion();
    s1.imprimir();
    cout << "\t====================\n";
    system("pause");
}