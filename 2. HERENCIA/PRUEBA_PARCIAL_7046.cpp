/*
	TODO: El equipo de desarrolladores de una empresa telefónica recibe la asignación de desarrollar un programa orientado a objetos para totalizar la facturación del servicio de mensajería ofrecido por la empresa, bajo los siguientes lineamientos :
* Los mensajes de texto se facturan en base a la cantidad de caracteres del mismo
* Los mensajes de video y/o gráficos se facturan en base al tamaño en bytes del contenido
* La mensajes de audio se facturan en base a su tiempo de duración
* Se le solicita a Ud que desarrolle la solución informática que resuelva el requerimiento. No olvide tomar en consideración que los mensajes pueden tener uno o varios de los formatos mencionados.
*/
#include<iostream>
using namespace std;

class FacturacionMensajeria
{
    protected:
        float factura_caracteres = 0;
        float factura_bits = 0;
        float factura_tiempo = 0;
    public:
        virtual void ingresoCaracteres() = 0;
        virtual void ingresoBits() = 0;
        virtual void ingresoDuracion() = 0;
};

class MensajeriaCliente : public FacturacionMensajeria
{        
    private:
        float caracteres = 0;
        float bits = 0;
        float multimedia = 0;
        float factura = 0;
    public:
        void ingresoCaracteres()
        {
            cout<<"Ingrese la cantidad de caracteres del mensaje: ";
            cin>>caracteres;
            factura_caracteres = caracteres * 0.01;
        }
        void ingresoBits()
        {
            cout<<"Ingrese la cantidad de bits del mensaje: ";
            cin>>bits;
            factura_bits = bits * 0.05;
        }
        void ingresoDuracion()
        {
            cout<<"Ingrese la duracion de los audios en segundos: ";
            cin>>multimedia;
            factura_tiempo = multimedia * 0.05;
        }
        void calculoFactura()
        {
            factura = factura_caracteres + factura_bits + factura_tiempo;
        }
        const float getCaracteres(){return caracteres;}
        const float getBits(){return bits;}
        const float getMultimedia(){return multimedia;}
        const float getFacturaCar(){return factura_caracteres;}
        const float getFacturaBits(){return factura_bits;}
        const float getFacturaTiem(){return factura_tiempo;}
        const float getFactura(){return factura;}
};

void menu(MensajeriaCliente c[], int n);
void impresionFactura(MensajeriaCliente c[], int n);

int main(void)
{
    int n;
    cout<<"=== BIENVENIDO ===\n";
    cout<<"Ingrese el numero de clientes: ";
    cin>>n;
    MensajeriaCliente clientes[n];
    menu(clientes,n);
    impresionFactura(clientes,n);

    system("pause");
}

void menu(MensajeriaCliente c[],int n)
{
    int op=0,op1=0;
    cout<<"=== MENU ===\n";
    cout<<"\nElija los formatos de su mensaje\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"========================\n";
        cout<<"\n=== CLIENTE #"<<i+1<<" ==="<<endl;
        do
        {
            reinicio:
            cout<<"1. CARACTERES\n";
            cout<<"2. MULTIMEDIA\n";
            cout<<"3. AUDIO\n";
            cout<<"Opcion: "; cin>>op;
            switch (op)
            {
            case 1:
                c[i].ingresoCaracteres();
                break;
            case 2:
                c[i].ingresoBits();
                break;
            case 3:
                c[i].ingresoDuracion();
                break;
            default:
                cout<<"ERROR: No existe ese formato\n";
                goto reinicio;
                break;
            }
            cout<<"Dese elegir otro formato? Si: 1\n";
            cin>>op1;
        } while (op1 == 1);
        c[i].calculoFactura();
    } 
}

void impresionFactura(MensajeriaCliente c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\n========================\n";
        cout<<"\n=== FACTURA CLIENTE #"<<i+1<<" ==="<<endl;
        cout<<"Caracteres: "<<c[i].getCaracteres();
        cout<<"\nPrecio: $"<<c[i].getFacturaCar();
        cout<<"\nBits: "<<c[i].getBits();
        cout<<"\nPrecio: $"<<c[i].getFacturaBits();
        cout<<"\nDuracion: "<<c[i].getMultimedia();
        cout<<"\nPrecio: $"<<c[i].getFacturaTiem();
        cout<<"\nPrecio final: $"<<c[i].getFactura();
        cout<<endl;
    }
}