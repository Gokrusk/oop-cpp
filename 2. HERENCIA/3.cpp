#include<iostream>
#include<windows.h>
using namespace std;

class Calculadora
{
    protected:
        double valor = 0;
    public:
};

class CalculadoraEnteros : public Calculadora
{
    public:
        void suma()
        {
            string op="+";
            double sum = valor;
            int cont=0;
            do
            {
                if(cont == 0)
                {
                        cout<<sum<<" + ";
                        cin>>valor;
                        sum+=valor;
                        cout<<sum;
                }else if(cont >= 1)
                {
                    cout<<" "; cin>>op;
                    if(op == "+")
                    {
                        cout<<sum<<" + ";
                        cin>>valor;
                        sum+=valor;
                        cout<<sum;

                    }else
                    {   if(op != "=")
                        {
                            if(op == "-")
                            {
                                valor = sum;
                                resta();
                            }else{
                                    if(op == "*")
                                    {
                                        valor = sum;
                                        multiplicacion();
                                    }else
                                        {
                                            if(op == "/")
                                            {
                                                valor = sum;
                                                division();
                                            }
                                        }
                                }
                        }else
                        {
                            cout<<"Resultado final: "<<sum<<endl;
                            valor = sum;
                        }
                    } 
                }
                cont++;
            } while (op == "+");
        }
        void resta()
        {
            string op = "-";
            double res = valor;
            int cont = 0;
            do
            {
                if(cont == 0)
                {
                    cout<<res<<" - ";
                    cin>>valor;
                    res-=valor;
                    cout<<res;
                }else if(cont >= 1)
                {
                    cout<<" "; cin>>op;
                    if(op == "-")
                    {
                        cout<<res<<" - ";
                        cin>>valor;
                        res-=valor;
                        cout<<res;

                    }else
                    {   if(op != "=")
                        {
                            if(op == "*")
                            {
                                valor = res;
                                multiplicacion();
                            }else
                                {
                                    if(op == "/")
                                    {
                                        valor = res;
                                        division();
                                    }else{
                                            valor = res;
                                            suma();
                                        }
                                }
                        }else
                            {
                                cout<<"Resultado final: "<<res<<endl;
                                valor = res;
                            }
                    } 
                }
                cont++;
            } while (op == "-");
        }
        void multiplicacion()
        {
            string op = "*";
            double mult = valor;
            int cont = 0;
            do
            {
                if(cont == 0)
                {
                    cout<<mult<<" x ";
                    cin>>valor;
                    mult*=valor;
                    cout<<mult;
                }else if(cont >= 1)
                {
                    cout<<" "; cin>>op;
                    if(op == "*")
                    {
                        cout<<mult<<" x ";
                        cin>>valor;
                        mult*=valor;
                        cout<<mult;

                    }else
                    {   if(op != "=")
                        {
                            if(op == "-")
                            {
                                valor = mult;
                                resta();
                            }else
                                {
                                    if(op == "/")
                                    {
                                        valor = mult;
                                        division();
                                    }else{
                                            valor = mult;
                                            suma();
                                        }
                                }
                        }else
                            {
                                cout<<"Resultado final: "<<mult<<endl;
                                valor = mult;
                            }
                    } 
                }
                cont++;
            } while (op == "*");
        }
        void division()
        {
            string op = "/";
            double div = valor;
            int cont=0;
            do
            {
                if(cont == 0)
                {
                    cout<<div<<" / ";
                    cin>>valor;
                    div/=valor;
                    cout<<div;
                }else if(cont>=1)
                {
                    cout<<" "; cin>>op;
                    if(op == "/")
                    {
                        cout<<div<<" / ";
                        cin>>valor;
                        div/=valor;
                        cout<<div;
                    }else
                    {   
                        if(op != "=")
                        {
                            if(op == "-")
                            {
                                valor = div;
                                resta();
                            }else
                                {
                                    if(op == "*")
                                    {
                                        valor = div;
                                        multiplicacion();
                                    }else{
                                            valor = div;
                                            suma();
                                        }
                                }
                        }else
                            {
                                cout<<"Resultado final: "<<div<<endl;
                                valor = div;
                            }
                    }
                }
                cont++;
            }while (op == "/");
        }
};

class CalculadoraQuebrados : public Calculadora
{
    private:
        int v1=0, v2=0, n=0, d=0, deno=0, num=0;
    public:
        void suma()
        {
            reinicio:
            string op="+";
            int cont = 0;
            if(num>0 & deno>0)
            {
                cont = 1;
            }else
                {
                    cout<<"Ingrese numerador y denominador:\n";
                    cin>>n>>d;
                    v1 = n;
                    v2 = d;
                }
            do
            {
                if(cont == 0)
                {
                    cout<<v1<<"/"<<v2<<" + ";
                    cin>>n>>d;
                    cout<<v1<<"/"<<v2<<" + "<<n<<"/"<<d<<endl;
                    if(v2==0 || d==0)
                    {
                        cout<<"Indeterminacion, ingrese de nuevo los valores..."<<endl;
                        Sleep(1000);
                        system("cls");
                        goto reinicio;
                    }else
                    {
                        deno = v2 * d;
                        num = (v1 * d)+(n * v2);
                        v1 = num;
                        v2 = deno;
                        cout<<v1<<"/"<<v2;
                    }
                }else if(cont >= 1)
                {
                    cout<<v1<<"/"<<v2;
                    cout<<" "; cin>>op;
                    if(op == "+")
                    {
                        reinicio2:
                        cout<<v1<<"/"<<v2<<" + ";
                        cin>>n>>d;
                        if(d==0)
                        {
                            cout<<"Indeterminacion, ingrese de nuevo los valores..."<<endl;
                            Sleep(1000);
                            system("cls");
                            goto reinicio2;
                        }else
                            {
                                cout<<v1<<"/"<<v2<<" + "<<n<<"/"<<d<<endl;
                                deno = v2 * d;
                                num = (v1 * d)+(n * v2);
                                v1 = num;
                                v2 = deno;
                                cout<<v1<<"/"<<v2;
                            }    
                    }else
                    {
                        if(op != "=")
                        {
                            if(op == "-")
                            {
                                v1 = num;
                                v2 = deno;
                                resta();
                            }else{
                                    if(op == "*")
                                    {
                                        v1 = num;
                                        v2 = deno;
                                        multiplicacion();
                                    }else
                                        {
                                            if(op == "/")
                                            {
                                                v1 = num;
                                                v2 = deno;
                                                division();
                                            }
                                        }
                                }
                        }else
                        {
                            for (int i = 2; i <= 13; i++)
                            {
                                while(v1%i==0 & v2%i==0)
                                {
                                    v1/=i;
                                    v2/=i;
                                }
                            }
                            cout<<"Resultado final: "<<v1<<"/"<<v2<<endl;
                        }
                    }        
                }
                cont++;
            }while (op == "+");
        }
        void resta()
        {
            reinicio:
            string op="-";
            int cont = 0;
            if(num>0 & deno>0)
            {
                cont = 1;
            }else
                {
                    cout<<"Ingrese numerador y denominador:\n";
                    cin>>n>>d;
                    v1 = n;
                    v2 = d;
                }
            do
            {
                if(cont == 0)
                {
                    cout<<v1<<"/"<<v2<<" - ";
                    cin>>n>>d;
                    cout<<v1<<"/"<<v2<<" - "<<n<<"/"<<d<<endl;
                    if(v2==0 || d==0)
                    {
                        cout<<"Indeterminacion, ingrese de nuevo los valores..."<<endl;
                        Sleep(1000);
                        system("cls");
                        goto reinicio;
                    }else
                    {
                        deno = v2 * d;
                        num = (v1 * d)-(n * v2);
                        v1 = num;
                        v2 = deno;
                        cout<<v1<<"/"<<v2;
                    }
                }else if(cont >= 1)
                {
                    reinicio2:
                    cout<<v1<<"/"<<v2;
                    cout<<" "; cin>>op;
                    if(op == "-")
                    {
                        cout<<v1<<"/"<<v2<<" - ";
                        cin>>n>>d;
                        if(d==0)
                        {
                            cout<<"Indeterminacion, ingrese de nuevo los valores..."<<endl;
                            Sleep(1000);
                            system("cls");
                            goto reinicio2;
                        }else
                            {
                                cout<<v1<<"/"<<v2<<" - "<<n<<"/"<<d<<endl;
                                deno = v2 * d;
                                num = (v1 * d)-(n * v2);
                                v1 = num;
                                v2 = deno;
                                cout<<v1<<"/"<<v2;
                            }
                    }else
                    {
                        if(op != "=")
                        {
                            if(op == "+")
                            {
                                v1 = num;
                                v2 = deno;
                                suma();
                            }else{
                                    if(op == "*")
                                    {
                                        v1 = num;
                                        v2 = deno;
                                        multiplicacion();
                                    }else
                                        {
                                            if(op == "/")
                                            {
                                                v1 = num;
                                                v2 = deno;
                                                division();
                                            }
                                        }
                                }
                        }else
                        {
                            for (int i = 2; i <= 13; i++)
                            {
                                while (v1%i==0 & v2%i==0)
                                {
                                    v1/=i;
                                    v2/=i;
                                }
                            }
                            cout<<"Resultado final: "<<v1<<"/"<<v2<<endl;
                        }
                    }            
                }
                cont++;
            }while (op == "-");
        }
        void multiplicacion()
        {
            reinicio:
            string op="*";
            int cont = 0;
            if(num>0 & deno>0)
            {
                cont = 1;
            }else
                {
                    cout<<"Ingrese numerador y denominador:\n";
                    cin>>n>>d;
                    v1 = n;
                    v2 = d;
                }
            do
            {
                if(cont == 0)
                {
                    cout<<v1<<"/"<<v2<<" x ";
                    cin>>n>>d;
                    cout<<v1<<"/"<<v2<<" x "<<n<<"/"<<d<<endl;
                    if(v2==0 || d==0)
                    {
                        cout<<"Indeterminacion, ingrese de nuevo los valores..."<<endl;
                        Sleep(1000);
                        system("cls");
                        goto reinicio;
                    }else
                    {
                        deno = v2 * d;
                        num = (v1 * n);
                        v1 = num;
                        v2 = deno;
                        cout<<v1<<"/"<<v2;
                    }
                }else if(cont >= 1)
                {
                    reinicio2:
                    cout<<" "; cin>>op;
                    if(op == "*")
                    {
                        cout<<v1<<"/"<<v2<<" x ";
                        cin>>n>>d;
                        if(d==0)
                        {
                            cout<<"Indeterminacion, ingrese de nuevo los valores..."<<endl;
                            Sleep(1000);
                            system("cls");
                            goto reinicio2;
                        }else
                            {
                                cout<<v1<<"/"<<v2<<" x "<<n<<"/"<<d<<endl;
                                deno = v2 * d;
                                num = (v1 * n);
                                v1 = num;
                                v2 = deno;
                                cout<<v1<<"/"<<v2;
                            }
                    }else
                    {
                        if(op != "=")
                        {
                            if(op == "+")
                            {
                                v1 = num;
                                v2 = deno;
                                suma();
                            }else{
                                    if(op == "-")
                                    {
                                        v1 = num;
                                        v2 = deno;
                                        resta();
                                    }else
                                        {
                                            if(op == "/")
                                            {
                                                v1 = num;
                                                v2 = deno;
                                                division();
                                            }
                                        }
                                }
                        }else
                        {
                            for (int i = 2; i <= 13; i++)
                            {
                                while (v1%i==0 & v2%i==0)
                                {
                                    v1/=i;
                                    v2/=i;
                                }
                            }
                            cout<<"Resultado final: "<<v1<<"/"<<v2<<endl;
                        }
                    }            
                }
                cont++;
            }while (op == "*");
        }
        void division()
        {
            reinicio:
            string op="/";
            int cont = 0;
            if(num>0 & deno>0)
            {
                cont = 1;
            }else
                {
                    cout<<"Ingrese numerador y denominador:\n";
                    cin>>n>>d;
                    v1 = n;
                    v2 = d;
                }
            do
            {
                if(cont == 0)
                {
                    cout<<v1<<"/"<<v2<<" % ";
                    cin>>n>>d;
                    cout<<v1<<"/"<<v2<<" % "<<n<<"/"<<d<<endl;
                    if(v2==0 || d==0)
                    {
                        cout<<"Indeterminacion, ingrese de nuevo los valores..."<<endl;
                        Sleep(1000);
                        system("cls");
                        goto reinicio;
                    }else
                    {
                        deno = v2 * n;
                        num = v1 * d;
                        v1 = num;
                        v2 = deno;
                        cout<<v1<<"/"<<v2;
                    }
                }else if(cont >= 1)
                {
                    reinicio2:
                    cout<<" "; cin>>op;
                    if(op == "/")
                    {
                        cout<<v1<<"/"<<v2<<" % ";
                        cin>>n>>d;
                        if(d==0)
                        {
                            cout<<"Indeterminacion, ingrese de nuevo los valores..."<<endl;
                            Sleep(1000);
                            system("cls");
                            goto reinicio2;
                        }else
                            {
                                cout<<v1<<"/"<<v2<<" % "<<n<<"/"<<d<<endl;
                                deno = v2 * n;
                                num = v1 * d;
                                v1 = num;
                                v2 = deno;
                                cout<<v1<<"/"<<v2;
                            }
                    }else
                    {
                        if(op != "=")
                        {
                            if(op == "+")
                            {
                                v1 = num;
                                v2 = deno;
                                suma();
                            }else{
                                    if(op == "-")
                                    {
                                        v1 = num;
                                        v2 = deno;
                                        resta();
                                    }else
                                        {
                                            if(op == "*")
                                            {
                                                v1 = num;
                                                v2 = deno;
                                                multiplicacion();
                                            }
                                        }
                                }
                        }else
                        {
                            for (int i = 2; i <= 13; i++)
                            {
                                while (v1%i==0 & v2%i==0)
                                {
                                    v1/=i;
                                    v2/=i;
                                }
                            }
                            cout<<"Resultado final: "<<v1<<"/"<<v2<<endl;
                        }
                    }            
                }
                cont++;
            }while (op == "/");
        }
};

void menu(CalculadoraEnteros n, CalculadoraQuebrados m);

int main(void)
{
    CalculadoraEnteros n1;
    CalculadoraQuebrados n2;
    menu(n1,n2);
    system("pause");
}

void menu(CalculadoraEnteros n,CalculadoraQuebrados m)
{
    int op, o;
    cout<<"1. Operaciones con enteros\n";
    cout<<"2. Operaciones con fracciones\n";
    cout<<"Opcion: ";
    cin>>op;
    if(op == 1)
    {
        reinicio:
        cout<<"Elija la operacion inicial\n";
        cout<<"1. Suma\n";
        cout<<"2. Resta\n";
        cout<<"3. Multiplicacion\n";
        cout<<"4. Dividir\n";
        cin>>o;
        cout<<"Para operar escriba el numero, presione enter, signo de operacion y presione enter"<<endl; 
        cout<<"Para terminar y ver resultado escriba: '=' y luego enter"<<endl;
        cout<<"!IMPORTANTE: en ocasiones debe escribir el signo y dar enter dos veces!\n";
        switch (o)
        {
        case 1:
                n.suma();
            break;
        case 2:
                n.resta();
            break;
        case 3:
                n.multiplicacion();
            break;
        case 4:
                n.division();
            break;        
        default:
            cout<<"Opcion invalida...\n";
            Sleep(1000);
            system("cls");
            goto reinicio;
            break;
        }
    }else if(op == 2)   
    {
        reinicio2:
        cout<<"Elija la operacion inicial\n";
        cout<<"1. Suma\n";
        cout<<"2. Resta\n";
        cout<<"3. Multiplicacion\n";
        cout<<"4. Dividir\n";
        cin>>o;
        cout<<"Para operar escriba el numero, presione enter, signo de operacion y presione enter"<<endl; 
        cout<<"Para terminar y ver resultado escriba: '=' y luego enter"<<endl;
        switch (o)
        {
        case 1:
                m.suma();
            break;
        case 2:
                m.resta();
            break;
        case 3:
                m.multiplicacion();
            break;
        case 4:
                m.division();
            break;        
        default:
            cout<<"Opcion invalida...\n";
            Sleep(1000);
            system("cls");
            goto reinicio2;
            break;
        }
    }
}
