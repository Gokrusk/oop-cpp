/*
   7034
   5.Realizar las cuatro operaciones fundamentales con números muy grandes, de hasta 40 dígitos
*/

#include <iostream>

using namespace std;

class calculos{
private:

    long double a;
    long double b;

public:

    calculos(){
     a=0;
     b=0;
    }

    long double getA (){
        return a;
    }

    long double getB (){
        return b;
    }

    void leer(){
        cout<<"\nIngrese el numero: " ; cin>>a;
        cout<<"\nIngrese el numero: " ; cin>>b;
    }


};

class Calculadora : public calculos{
private:
    int nCalculos;
    int opcion;
public:

    Calculadora(){
        nCalculos=0;
        opcion=0;
    }
    int menu(){
        cout<<"\n----------------------------------------------------------"<<endl;
        cout<<"\nTipos de calculos:"<<endl;
        cout<<"1. SUMA"<<endl;
        cout<<"2. RESTA"<<endl;
        cout<<"3. MULTIPLICACION"<<endl;
        cout<<"4. DIVISION"<<endl;
        cout<<"5. SALIR"<<endl;
        cout<<"\nESCOJA UNA OPCION: ";cin>>opcion;
        cout<<"\n----------------------------------------------------------"<<endl;
        return opcion;

    };

    long double realizarCalculos(){

    cout<<"Ingrese el numero de calculos a realizar: ";cin>>nCalculos;

    for(int i=1; i<=nCalculos; i++){
            switch (menu()){
        case 1:
            cout<<"\n\tSUMA: "<<endl;
            calculos :: leer();
            long double a;
            a=getA()+getB();
            cout<<"\nRESULTADO: "<<a<<endl;
            break;
        case 2:
            cout<<"\n\tRESTA: "<<endl;
            calculos :: leer();
            long double b;
            b=getA()-getB();
            cout<<"\nRESULTADO: "<<b<<endl;
            break;
        case 3:
            cout<<"\n\tMULTIPLICACION: "<<endl;
            calculos :: leer();
            long double c;
            c=getA()*getB();
            cout<<"\nRESULTADO: "<<c<<endl;
            break;
        case 4:
            cout<<"\n\tDIVISION: "<<endl;
            calculos :: leer();
            long double d;
            d=getA()/getB();
            cout<<"\nRESULTADO: "<<d<<endl;
            break;
        case 5:
            return 0;
            break;

        default:
            cout<<"\nLa opcion ingresada es incorrecta"<<endl;
           }
        }
      return -1;
    };

};

int main(){
Calculadora Calc;

Calc.realizarCalculos();

return 0;
};
