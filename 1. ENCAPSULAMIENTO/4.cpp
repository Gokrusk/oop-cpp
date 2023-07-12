#include<iostream>
using namespace std;

class Coche
{	
	private:
		string marca;
		string modelo;
		string color;
		int marcha;
    public:
        Coche(){
            marca= "";
            modelo= "";
            color= "";
			marcha = 0;
        }

    void ingreso()
	{
		cout <<"Ingrese la marca del automovil: "<<endl;
		cin>> marca;
		cout <<"Ingrese el modelo del automovil: "<<endl;
		cin>> modelo;
		cout <<"Ingrese el color del automovil: "<<endl;
		cin>> color;
	}

    void arrancarMotor()
    {
        cout <<"Se esta encendiendo el motor"<<endl;
		cout<<"================"<<endl;
    }
    void cambiar_velocidad()
    {
		marcha += 1;
    }

    void Acelerar()  
	{ 
		if(marcha>=5)
		{
			cout<<"No se puede aumentar mas la marcha"<<endl;
		}else
			{
				cout <<"Acelerando...."<<endl;
				cambiar_velocidad();
				cout<<"Marcha: "<<marcha<<endl;
			}
	}

	void Frenar()
	{
		 if(marcha == 0)
		 {
			 cout <<"El coche se ha frenado"<<endl; 
		 }else
		 	{
				cout <<"El coche se ha frenado"<<endl; 
		 		marcha-=1;
				cout<<"Marcha: "<<marcha<<endl;	
		 	}
	}	

    void parar_motor()
	{
		if (marcha>0)
		{
			cout<<"Debe bajar todas las marchas"<<endl;
		}else
			{
				cout << "El motor se ha detenido"<<endl; 
				cout<<"================"<<endl;
				cout<<"Informacion de coche"<<endl;
				cout <<"La marca del coche es: "<<marca<<endl;	
				cout <<"El modelo del coche es: " <<modelo<<endl;
				cout <<"El color del coche es: "<<color<<endl;
				cout <<""<<endl;
			}
	}

    void setMarca(string marc){marca=marc;}
	void setModelo(string model){modelo=model;}
	void setColor(string col){color=col;}		
	const string getMarca(){return marca;}
	const string getModelo(){return modelo;}
	const string getColor(){return color;}


};

void proceso(Coche a[],int n);
void salto();

int main(void)
{
    int n=0, apagar_coche,op;
	cout << endl << "Ingrese la cantidad de coches: "<<endl ;
    cin >> n;
    Coche uno[n];
    proceso(uno,n);

    system("pause");
}

void proceso(Coche a[],int n)
{
    int op,o;
    for (int i = 0; i < n; i++)
    {
		salto();
		cout<<"COCHE #"<<i+1<<endl;
        a[i].ingreso();
        cout<< "Automovil "<<endl;
        cout<<" 1. Arrancar motor"<<endl;
        cin>>op;
		 do
        {
			op = 1;
         	if (op == 1) 
			{
				a[i].arrancarMotor();
    	        cout<<" 1. Acelerar"<<endl;
                cout<<" 2. Frenar"<<endl;
                cout<<" 3. Parar"<<endl;
                salto();
                cout << "Ingrese las opcion que desea realizar con el carro"<<endl; 
				cin>>op;
	            cout<<""<<endl;
    	        switch (op)
		        {
    		        case 1:
    			        a[i].Acelerar();
    		        break;
    		
    		        case 2:
    			        a[i].Frenar();
    		        break;
    		
    		        case 3:
    			        a[i].parar_motor();
    		        break;
    		
    		        default: 
    		        cout <<" No ah ingresado una opcion correcta"<<endl;	
		        }	
                    cout<<"================"<<endl;
            	    cout <<"Desea continuar usando el auto Si = 1 / No = 0 "<<endl;
                    cin >> o;
          	}else{
	                cout<<"Necesita primero enceder el auto para acceder a las demas opciones"<<endl;
			    }
	   }while(o == 1);
    }
}

void salto()
{
    cout<<"================"<<endl;
}