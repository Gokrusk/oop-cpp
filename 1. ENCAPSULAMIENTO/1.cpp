/*1.Crea una clase Contador con los mÃ©todos para incrementar y decrementar el contador. La clase contendrÃ¡ un constructor por defecto, un constructor con parÃ¡metros, un constructor copia y los mÃ©todos getters y setters.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Contador{
    private:
    int cont;
    public:
    Contador(){cont=0;}
    
	Contador(int _cont)
	{
       cont=_cont;
        if (cont<0)
		{
            cont=0;
        }else 
		    cont=cont;
    }

    void setcont (int _cont)
	{
        cont=_cont;
        if (cont<0)
		{
            cont=0;
        }else
            cont=cont;    
    }
    
    int getcont(){return cont;}

    void incrementar()
	{
        cont++;
        cout<< cont<< endl;
    }
    
	void decrementar()
	{
        cont--;
	    if (cont < 0)
		{
            cont=0;
        }
        cout<<cont<<endl;
    }
};

int main(){
    Contador contador1=Contador();
    int _cont,cont;
    cout<<"Ingrse el contador: "; 
    cin>>_cont;
    
	contador1.setcont(_cont);
    contador1.incrementar();
    contador1.getcont();
    contador1.decrementar();
    contador1.getcont();

    cout<<"CONSTRUCTOR PARAMETROS"<<endl;
    cout<<"Ingrse el contador: "; 
    cin>>cont;
    Contador contador2(cont);
    contador2.incrementar();
    contador2.getcont();
    contador2.decrementar();
    contador2.getcont();
    cout<<"CONSTRUCTOR COPIA"<<endl;
    Contador contador3=Contador(contador2);
    contador3.incrementar();
    contador3.getcont();
    contador3.decrementar();
    contador3.getcont();
    system("Pause");
}