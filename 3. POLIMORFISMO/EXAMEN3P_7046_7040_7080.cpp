/*
	TODO: Elaborar un POO polimórfico para listar ordenadamente los códigos de los estudiantes becarios de la FIE, clasificándolos por escuela y tipo de beca. Para las becas académicas se requiere un puntaje mínimo. Las becas deportivas requieren un puntaje mínimo y ser seleccionado en por lo menos una disciplina deportiva. Existen becas de movilidad, que requieren un puntaje mínimo e indicar el país de destino. Finalmente, existen becas por discapacidad, en que se debe definir el tipo y grado de discapacidad del estudiante.
*/
#include<iostream>
using namespace std;

//PUNTAJES MINIMOS:
//Beca academica: 9/10 puntos
//Beca deportiva: 8/10 puntos
//Beca discapacidad: 7/10 puntos
//Beca movilidad: 6/10 puntos
//ESCUELAS: software - disenyo - tics - electronica - telecomunicaciones

//CLASE BECAS PARA HEREDAR
class Becas
{
    string tipoBeca;
    double puntaje;
};
//CLASES CON ATRIBUTOS RESPECTIVOS
//GETS PARA RETORNAR EL TIPO DE BECA
class BecaAcademica : Becas
{
    private:
        string tipoBeca = "Academica";
    public:
        const string getTipobeca(){return tipoBeca;}
};
//SE REALIZA LA HERENCIA DE LA CLASE BECAS
class BecaDeportiva : Becas
{
    private:
        string tipoBeca = "Deportiva";
        int nDeportes;
    public:
        //set para establecer el numero de deportes q practica
        int setDeportes(int n){nDeportes = n;} 
        const string getTipobeca(){return tipoBeca;}
};

class BecaMovilidad : Becas
{
    private:
        string tipoBeca = "Movilidad";
        string pais_Destino;
    public:
        //set para establecer el pais de destino
        string setPais(string p){pais_Destino = p;}
        const string getTipobeca(){return tipoBeca;}
};

class BecaDiscapacidad : Becas
{
    private:
        string tipoBeca = "Discapacidad";
        int gradoDiscapacidad;
    public:
        //set para establecer el grado de discapacidad
        int setGrado(int g){gradoDiscapacidad = g;}
        const string getTipobeca(){return tipoBeca;}
};
//SE CREA LA CLASE BECARIOSFIE
class BecariosFIE
{
    //atributos
    protected:
        double puntaje;
        string nombres, apellidos, codigo;
        string escuela;
        string tipoBeca;
    public:
        //metodo para leer datos
        void leerDatos()
        {
            cout<<"\nIngrese su escuela: ";
            cin>>escuela;
            cout<<"\nIngrese el nombre: ";
            cin>>nombres;
            cout<<"\nIngrese apellidos: ";
            cin>>apellidos;
            cout<<"\nIngrese codigo: ";
            cin>>codigo;
            cout<<"\nIngrese puntaje: ";
            cin>>puntaje;
        }
        //metodo para asignacion de beca segun el puntaje
        void asignacionBeca()
        {
            int op = 0;
            cout<<"BECAS DISPONIBLES SEGUN SU PUNTAJE: \n";
            //segun el puntaje se habilitara un menu donde
            //utilizando composicion definimos objetos para utilizar
            if(puntaje>8 && puntaje <= 10)
            {
                //segun la opcion que elija se instanciara un objeto
                //de las clases de becas
                cout<<"1. Academica\n";
                cout<<"2. Deportiva\n";
                cout<<"3. Movilidad\n";
                cout<<"4. Discapacidad\n";
                cout<<"Opcion: "; cin>>op;
                if(op == 1)
                {
                    BecaAcademica b1;
                    tipoBeca = b1.getTipobeca();
                }else
                    {
                        if(op == 2)
                        {
                            int d;
                            BecaDeportiva b2;
                            cout<<"Ingrese cantidad de deportes: ";
                            cin>>d;
                            b2.setDeportes(d);
                            tipoBeca = b2.getTipobeca();
                        }else
                        {
                            if(op == 3)
                            {
                                string p;
                                BecaMovilidad b3;
                                cout<<"Ingrese pais de destino: ";
                                cin>>p;
                                b3.setPais(p);
                                tipoBeca = b3.getTipobeca();
                            }else
                            {
                                if(op == 4)
                                {
                                    int g;
                                    BecaDiscapacidad b4;
                                    cout<<"Ingrese grado de discapacidad: ";
                                    cin>>g;
                                    b4.setGrado(g);
                                    tipoBeca = b4.getTipobeca();
                                }
                            }
                        }
                    } 
                    
            }else
                {
                    if(puntaje == 8)
                    {
                        cout<<"1. Deportiva\n";
                        cout<<"2. Movilidad\n";
                        cout<<"3. Discapacidad\n";
                        cout<<"Opcion: "; cin>>op;
                        if(op == 1)
                        {
                            int d;
                            BecaDeportiva b2;
                            cout<<"Ingrese cantidad de deportes: ";
                            cin>>d;
                            b2.setDeportes(d);
                            tipoBeca = b2.getTipobeca();
                        }else
                        {
                            if(op == 2)
                            {
                                string p;
                                BecaMovilidad b3;
                                cout<<"Ingrese pais de destino: ";
                                cin>>p;
                                b3.setPais(p);
                                tipoBeca = b3.getTipobeca();
                            }else
                                {
                                    if(op == 3)
                                    {
                                        int g;
                                        BecaDiscapacidad b4;
                                        cout<<"Ingrese grado de discapacidad: ";
                                        cin>>g;
                                        b4.setGrado(g);
                                        tipoBeca = b4.getTipobeca();
                                    }
                                }
                            }
                    }else
                    {
                        if(puntaje == 7)
                        {
                            cout<<"1. Movilidad\n";
                            cout<<"2. Discapacidad\n";
                            cout<<"Opcion: "; cin>>op;
                            if(op == 1)
                            {
                                string p;
                                BecaMovilidad b3;
                                cout<<"Ingrese pais de destino: ";
                                cin>>p;
                                b3.setPais(p);
                                tipoBeca = b3.getTipobeca();
                            }else
                                {
                                    if(op == 2)
                                    {
                                        int g;
                                        BecaDiscapacidad b4;
                                        cout<<"Ingrese grado de discapacidad: ";
                                        cin>>g;
                                        b4.setGrado(g);
                                        tipoBeca = b4.getTipobeca();
                                    }
                                }
                        }else
                        {
                            if(puntaje == 6)
                            {
                                cout<<"1. Discapacidad\n";
                                cout<<"Opcion: "; cin>>op;
                                if(op == 1)
                                {
                                    int g;
                                    BecaDiscapacidad b4;
                                    cout<<"Ingrese grado de discapacidad: ";
                                    cin>>g;
                                    b4.setGrado(g);
                                    tipoBeca = b4.getTipobeca();
                                }
                            }
                        }
                    }
                }
        }
        //metodo para imprimir datos
        void imprimir()         
        {
            cout<<"Codigo: "<<codigo;
            cout<<"\nNombres: "<<nombres;
            cout<<"\nApellidos: "<<apellidos<<endl;
        }
        //gets para utilizar en la impresion donde tenemos que
        //imprimir ordenando segun la escuela y el tipo de beca
        const string getEscuela(){return escuela;}
        const string getTipobeca(){return tipoBeca;}
};

//prototipo metodos
void leer(BecariosFIE b[], int n);
void impresion(BecariosFIE b[], int n);

int main(void)
{
    //variable que usaremos para leer una cantidad de becarios
    int n; 
    cout<<"Ingrese cantidad de becarios: ";
    cin>>n;
    //creamos un array de objetos
    BecariosFIE a[n];
    //metodos para leer e imprimir
    //tenemos como parametros el array de objetos y la cantidad de becarios
    leer(a,n);
    impresion(a,n);
    system("pause");
}

//metodos
void leer(BecariosFIE b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\nBECARIO #"<<i+1<<endl;
        b[i].leerDatos();
        b[i].asignacionBeca();
    }
}

void impresion(BecariosFIE b[], int n)
{
    cout<<"\nBECARIOS\n";
    //impresion de becarios con un for para recorrer el array de objetos
    for (int i = 0; i < n; i++)
    {
        //con una condicion seleccionamos unicamente los objetos de cada escuela
        //luego con otra condicion seleccionamos unicamente los objetos de una beca especifica
        //finalmente llamamos al metodo imprimir
        if(b[i].getEscuela() == "software")
        {
            cout<<"\n\nESCUELA : SOFTWARE \n";
            if(b[i].getTipobeca() == "Academica")
            {
                cout<<"\tBeca academica\n";
                cout<<"Becario #"<<i+1<<endl;
                b[i].imprimir();
            }else
            {
                if(b[i].getTipobeca() == "Deportiva")
                {
                    cout<<"\tBeca deportiva\n";
                    cout<<"Becario #"<<i+1<<endl;
                    b[i].imprimir();
                }else
                    {
                        if(b[i].getTipobeca() == "Movilidad")
                        {
                            cout<<"\tBeca movilidad\n";
                            cout<<"Becario #"<<i+1<<endl;
                            b[i].imprimir();
                        }else
                            {
                                if(b[i].getTipobeca() == "Discapacidad")
                                {
                                    cout<<"\tBeca discapacidad\n";
                                    cout<<"Becario #"<<i+1<<endl;
                                    b[i].imprimir();
                                }
                            }   
                    }
            }
        }else
            {
                if(b[i].getEscuela() == "disenyo")
                {
                    cout<<"\n\nESCUELA : DISENYO \n";
                    if(b[i].getTipobeca() == "Academica")
                    {
                        cout<<"\tBeca academica\n";
                        cout<<"Becario #"<<i+1<<endl;
                        b[i].imprimir();
                    }else
                    {
                        if(b[i].getTipobeca() == "Deportiva")
                        {
                            cout<<"\tBeca deportiva\n";
                            cout<<"Becario #"<<i+1<<endl;
                            b[i].imprimir();
                        }else
                            {
                                if(b[i].getTipobeca() == "Movilidad")
                                {
                                    cout<<"\tBeca movilidad\n";
                                    cout<<"Becario #"<<i+1<<endl;
                                    b[i].imprimir();
                                }else
                                    {
                                        if(b[i].getTipobeca() == "Discapacidad")
                                        {
                                            cout<<"\tBeca discapacidad\n";
                                            cout<<"Becario #"<<i+1<<endl;
                                            cout<<"Becario #"<<i+1<<endl;
                                            b[i].imprimir();
                                        }
                                    }   
                            }
                    }
                }else
                    {
                        if(b[i].getEscuela() == "tics")
                        {
                            cout<<"\n\nESCUELA : TICS \n";
                            if(b[i].getTipobeca() == "Academica")
                            {
                                cout<<"\tBeca academica\n";
                                cout<<"Becario #"<<i+1<<endl;
                                b[i].imprimir();
                            }else
                            {
                                if(b[i].getTipobeca() == "Deportiva")
                                {
                                    cout<<"\tBeca deportiva\n";
                                    cout<<"Becario #"<<i+1<<endl;
                                    b[i].imprimir();
                                }else
                                    {
                                        if(b[i].getTipobeca() == "Movilidad")
                                        {
                                            cout<<"\tBeca movilidad\n";
                                            cout<<"Becario #"<<i+1<<endl;
                                            b[i].imprimir();
                                        }else
                                            {
                                                if(b[i].getTipobeca() == "Discapacidad")
                                                {
                                                    cout<<"\tBeca discapacidad\n";
                                                    cout<<"Becario #"<<i+1<<endl;
                                                    b[i].imprimir();
                                                }
                                            }   
                                    }
                            }
                        }else
                            {
                                if(b[i].getEscuela() == "telecomunicaciones")
                                {
                                    cout<<"\n\nESCUELA : TELECOMUNICACIONES \n";
                                    if(b[i].getTipobeca() == "Academica")
                                    {
                                        cout<<"\tBeca academica\n";
                                        cout<<"Becario #"<<i+1<<endl;
                                        b[i].imprimir();
                                    }else
                                    {
                                        if(b[i].getTipobeca() == "Deportiva")
                                        {
                                            cout<<"\tBeca deportiva\n";
                                            cout<<"Becario #"<<i+1<<endl;
                                            b[i].imprimir();
                                        }else
                                            {
                                                if(b[i].getTipobeca() == "Movilidad")
                                                {
                                                    cout<<"\tBeca movilidad\n";
                                                    cout<<"Becario #"<<i+1<<endl;
                                                    b[i].imprimir();
                                                }else
                                                    {
                                                        if(b[i].getTipobeca() == "Discapacidad")
                                                        {
                                                            cout<<"\tBeca discapacidad\n";
                                                            cout<<"Becario #"<<i+1<<endl;
                                                            b[i].imprimir();
                                                        }
                                                    }   
                                            }
                                    }
                                }else
                                    {
                                        if(b[i].getEscuela() == "electronica")
                                        {
                                            cout<<"\n\nESCUELA : ELECTRONICA \n";
                                           if(b[i].getTipobeca() == "Academica")
                                            {
                                                cout<<"\tBeca academica\n";
                                                cout<<"Becario #"<<i+1<<endl;
                                                b[i].imprimir();
                                            }else
                                            {
                                                if(b[i].getTipobeca() == "Deportiva")
                                                {
                                                    cout<<"\tBeca deportiva\n";
                                                    cout<<"Becario #"<<i+1<<endl;
                                                    b[i].imprimir();
                                                }else
                                                    {
                                                        if(b[i].getTipobeca() == "Movilidad")
                                                        {
                                                            cout<<"\tBeca movilidad\n";
                                                            cout<<"Becario #"<<i+1<<endl;
                                                            b[i].imprimir();
                                                        }else
                                                            {
                                                                if(b[i].getTipobeca() == "Discapacidad")
                                                                {
                                                                    cout<<"\tBeca discapacidad\n";
                                                                    cout<<"Becario #"<<i+1<<endl;
                                                                    b[i].imprimir();
                                                                }
                                                            }   
                                                    }
                                            } 
                                        }
                                    }
                            }
                    }
            }
    }
}