#include<iostream>
using namespace std;

class zapato
{
    private:
        string modelo;
        int talla;
        double precio;
    public:
        zapato()
        {
            modelo = "";
            precio = 0;
            talla = 0;
        }
        void leer()
        {
            int m;
            string mod;
            cout<<"-> MODELOS <-"<<endl;
            cout<<"1.- Modelo Ejecutivo      345.50"<<endl;
            cout<<"2.- Modelo Premier         298.70"<<endl;
            cout<<"3.- Modelo Emperador      246.00"<<endl;
            cout<<"Escriba el modelo a elegir: ";
            cin>>m;
            
            switch (m)
            {
            case 1: precio = 345.50;
                    modelo = "Modelo Ejecutivo";
                break;
            case 2: precio = 298.70;
                    modelo = "Modelo Premier";
                break;
            case 3: precio = 246.00;
                    modelo = "Modelo Emperador";
                break;
            default:
                cout<<"Ese modelo no existe!"<<endl;
                break;
            }
            cout<<"===================="<<endl;
            cout<<"-> TALLAS <-"<<endl;
            cout<<">Talla 8"<<endl;
            cout<<">Talla 9"<<endl;
            cout<<">Talla 10"<<endl;
            cout<<"Escriba la talla a elegir: ";
            cin>>talla;
        }

        void calc()
        {	
            switch (talla)
            {
            case 8: //cout<<endl<<"COMPRA FINALIZADA..."<<endl;
                    //cout<<modelo<<" "<<"$"<<precio<<endl;
                break;
            case 9:	//cout<<endl<<"COMPRA FINALIZADA..."<<endl;
                    precio += 10;
                    //cout<<modelo<<" "<<"$"<<precio<<endl; 
                break;
            case 10: //cout<<endl<<"COMPRA FINALIZADA..."<<endl;
                        precio += 20;
                    //cout<<modelo<<" "<<"$"<<precio<<endl;
                break;
            default:
                break;
            }
            cout<<endl;
        }

        void imprimir()
        {
            cout<<"MODELO: "<<modelo<<endl;
            cout<<"PRECIO: "<<precio<<endl;
        }
};

void read(zapato z[],int n);
void calculo(zapato z[],int n);
void impresion(zapato z[],int n);
void salto();

int main(void)
{
    int n;
    cout<<"Ingrese la cantidad de zapatos a comprar: ";
    cin>>n;
    zapato z1[n];
    read(z1,n);
    calculo(z1,n);
    impresion(z1,n);
	system("pause");
}

void read(zapato z[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"ZAPATO #"<<i+1<<endl;
        z[i].leer();
        salto();
    }
}

void calculo(zapato z[],int n)
{
    for (int i = 0; i < n; i++)
    {
        z[i].calc();
    }
}

void impresion(zapato z[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"COMPRA #"<<i+1<<endl;
        z[i].imprimir();
        salto();
    }
}

void salto()
{
    cout<<"===================="<<endl;
}