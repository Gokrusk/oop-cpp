//7.Determinar si cada número ingresado es primo o compuesto, a través de la generación de la Criba de Eratóstenes.
#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
using namespace std;

class criba{
	protected:
		int v[100],n;
	public:
	void crib(){
		memset(v,0,sizeof(v)); 
		v[0] = v[1] = 1;
		for(int i=2; i<=sqrt(100);i++){
			if(v[i]==0){
				for(int j=2*i;j<100; j+=i){
					v[j]=1;
				}
			}
		}
	}
	void leer(){
		cout<<"Ingrese un numero: ";
		cin>>n;
	}
	void op(){	
		if(v[n]==0){
			cout<<"Es primo"<<endl;
		}else {
			cout<<"Es un numero compuesto"<<endl<<endl;
		}	
	}
				
};

int main(){
	system("color 1b");
	int op;
	
	cout<<"\tPROGRAMA PARA CALCULAR NUMEROS PRIMOS Y COMPUESTOS"<<endl<<endl;
	criba obj;
	do{
	obj.leer();
	obj.crib();
	obj.op();
	
	cout<<"\nDesea ingresar otro numero SI[1]  NO[0]: ";
	cin>>op;
	
	system("cls");
	}while(op==1);
	
	
	system("pause");
	return 0;
	
	//El ejercicio presentado no se pudo aplicar la herencia 
}
