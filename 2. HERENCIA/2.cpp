#include<iostream>
using namespace std;

class Persona
{
    protected:
        string nombre, edad, CI;
    public:
        Persona(string n, string e, string c)
        {
            nombre = n;
            edad = e;
            CI = c;
        }
        void imprimir()
        {
            cout<<"=== DATOS ==="<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Edad: "<<edad<<endl;
            cout<<"Cedula: "<<CI<<endl;
        }
        string set_nom(string a){nombre = a;}
        string set_edad(string b){edad = b;}
        string set_CI(string c){CI = c;}
        const string get_nom(){return nombre;}
        const string get_edad(){return edad;}
        const string get_CI(){return CI;}
};

class Empleado : public Persona
{
    double sueldo;
    public:
        Empleado(string nom, string ed, string ced, double suel) : Persona(nom, ed, ced)
        {
            sueldo = suel;
        }
        void impSueldo()
        {
            cout<<"Sueldo: "<<sueldo<<endl;
        }
        
};

void leerDatos(string &nom, string &ed, string &ced, double &suel);

int main(void)
{
    string nom, ed, ced;
    double suel;
    int n;
    leerDatos(nom,ed,ced,suel);
    Empleado emp(nom,ed,ced,suel);
    emp.imprimir();
    emp.impSueldo();
    cout<<"=== SETS Y GETS ==="<<endl;
    emp.set_nom("NIGELL");
    emp.set_edad("19");
    emp.set_CI("0850106188");
    emp.get_nom();
    emp.get_CI();
    emp.get_edad();
    system("pause");
}

void leerDatos(string &nom, string &ed, string &ced, double &suel)
{
    cout<<"Ingrese el nombre: ";
    cin>>nom;
    cout<<"Ingrese la edad: ";
    cin>>ed;
    cout<<"Ingrese la cedula: ";
    cin>>ced;
    cout<<"Ingrese el sueldo: ";
    cin>>suel;
}