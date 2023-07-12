#include<iostream>
using namespace std;

class vehiculo
{
    private:
        int centro;
        int modelo;
        string estado;
    public:
        vehiculo()
        {
            centro = 0;
            modelo = 0;
            estado = "";
        }
        void setCentro(int a){centro = a;}
        void setModel(int b){modelo = b;}
        void setEstado(string c){estado = c;}
        const int getCentro(){return centro;}
        const int getModelo(){return modelo;}
        const string getEstado(){return estado;}
};  

void centro(int &cen);
void modelo(int &modl);
void calculo(vehiculo a[], int n, double v[3], double &vent);
void imprimir(double v[3], double vent);
void leer(vehiculo a[],int n);

void salto();

int main(void)
{
    int n;
    double vv[] = {0,0,0,0}, ventas=0;
    cout<<"Ingrese la cantidad de vehiculos: ";
    cin>>n;
    vehiculo ve[n];
    leer(ve,n);
    calculo(ve,n, vv,ventas);
    imprimir(vv,ventas);
}

void leer(vehiculo a[],int n)
{
    int c,m;
    for (int i = 0; i < n; i++)
    {
        salto();
        cout<<"INFORMACION VEHICULO #"<<i+1<<endl;
        centro(c);
        a[i].setCentro(c);
        modelo(m);
        a[i].setModel(m);
        a[i].setEstado("Vendido");
    } 
}

void centro(int &cen)
{
    int op;
    cout<<"Escoja el centro de compra"<<endl;
    cout<<"1. Centro 1"<<endl;
    cout<<"2. Centro 2"<<endl;
    cout<<"3. Centro 3"<<endl;
    cout<<"4. Centro 4"<<endl;
    cin>>op;
    switch (op)
    {
    case 1:
            cen = 1;
        break;
    case 2:
            cen = 2;
        break;
    case 3:
            cen = 3;
        break;
    case 4:
            cen = 4;
        break;
    default:
            cout<<"No existe ese centro"<<endl;
        break;
    }
}

void modelo(int &modl)
{
    int op;
    cout<<"Escoja el modelo de vehiculo"<<endl;
    cout<<"1. $9.000"<<endl;
    cout<<"2. $10.500"<<endl;
    cout<<"3. $14.500"<<endl;
    cout<<"4. $17.200"<<endl;
    cin>>op;
    switch (op)
    {
    case 1:
            modl = 1;
        break;
    case 2:
            modl = 2;
        break;
    case 3:
            modl = 3;
        break;
    case 4:
            modl = 4;
        break;
    default:
            cout<<"No existe ese modelo"<<endl;
        break;
    }
}

void calculo(vehiculo a[],int n, double v[3], double &vent)
{
    
    for (int i = 0; i < n; i++)
    {
        int aux2[] = {0,0};
        aux2[0] = a[i].getModelo();
        aux2[1] = a[i].getCentro();
        switch (aux2[1])
        {
        case 1:
            vent += 9000;
                switch (aux2[0])
                {
                case 1:
                        v[0] += 9000;
                    break;
                case 2:
                        v[1] += 10500;
                    break;
                case 3:
                        v[2] += 14500;
                    break;
                case 4:
                        v[3] += 17200;
                    break;
                }
            break;
        case 2:
            vent += 10500;
                switch (aux2[0])
                {
                case 1:
                        v[0] += 9000;
                    break;
                case 2:
                        v[1] += 10500;
                    break;
                case 3:
                        v[2] += 14500;
                    break;
                case 4:
                        v[3] += 17200;
                    break;
                }
            break;
        case 3:
            vent += 14500;
                switch (aux2[0])
                {
                case 1:
                        v[0] += 9000;
                    break;
                case 2:
                        v[1] += 10500;
                    break;
                case 3:
                        v[2] += 14500;
                    break;
                case 4:
                        v[3] += 17200;
                    break;
                }
            break;
        case 4:
            vent += 17200;
                switch (aux2[0])
                {
                case 1:
                        v[0] += 9000;
                    break;
                case 2:
                        v[1] += 10500;
                    break;
                case 3:
                        v[2] += 14500;
                    break;
                case 4:
                        v[3] += 17200;
                    break;
                }
            break;
        }
    }
}

void imprimir(double v[3], double vent)
{
    cout<<"Ventas totales: $"<<vent<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Ventas centro #"<<i+1<<": "<<v[i]<<endl;
    }
    
}

void salto()
{
    cout<<"================="<<endl;
} 
