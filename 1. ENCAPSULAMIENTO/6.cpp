#include<iostream>
using namespace std;

class empleado
{
    private:
        string nombre;
        double comsion;  
        double sueldo;
    public:
        void leer(int n)
        {
            cout<<"Ingrese el nombre del empleado #"<<n<<": "<<endl;
            cin>>nombre;
        }
        void calculo(double porcentaje)
        {
            comsion = porcentaje * 0.09;
            sueldo = 1000 + comsion;
        }
        void imprimir()
        {
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Pago: "<<sueldo<<endl;
        }

        void setComsion(double a){comsion = a;}
};

void ventas(empleado emp[], int n);
void impresion(empleado emp[], int n);
void articulos(double &com_);

int main(void)
{
    int n;
    cout<<"Ingrese el numero de empleados: ";
    cin>>n;

    empleado emp[n];
    ventas(emp,n);
    impresion(emp,n);
    system("pause");
}

void ventas(empleado emp[], int n)
{   
    double com;
    for (int i = 0; i < n; i++)
    {
        com = 0;
        emp[i].leer(i+1);
        cout<<"SElECCIONES LOS ARTICULOS VENDIDOS POR EL VENDEDOR #"<<i+1<<endl;
        articulos(com);
        emp[i].setComsion(com);
        emp[i].calculo(com);
    }
}

void impresion(empleado emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        emp[i].imprimir();
    }
}

void articulos(double &com_)
{
    double A=239.50,B=129.00,C=99.50,D=350.00;
    int op,r=1;
    do
    {
        cout<<"1. 239.50"<<endl;
        cout<<"2. 129.00"<<endl;
        cout<<"3. 99.50"<<endl;
        cout<<"4. 350.00"<<endl;
        cin>>op;
        switch (op)
        {
        case 1:
                com_+=A;
            break;
        case 2:
                com_+=B;
            break;
        case 3:
                com_+=C;
            break;
        case 4:
                com_+=D;
            break;
        default:
            break;
        }
        cout<<"Desea ingresar otro articulo? 1:Si 2:No"<<endl;
        cin>>r;
    } while (r!=2);
}