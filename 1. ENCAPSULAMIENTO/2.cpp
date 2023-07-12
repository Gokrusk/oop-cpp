//2. Crea una clase Complejo con métodos para sumar, restar, multiplicar y dividir números complejos
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


class Complejo{
	private:
		double real1;
		double imaginario1;
		double real2;
		double imaginario2;
		double a;
		double b;
	public:
		Complejo();
		void setReal1(double _real1){
			real1 = _real1;
		}
		void setReal2(double _real2){
			real2 = _real2;
		}
		void setImaginario1(double _imaginario1){
			imaginario1 = _imaginario1;
		}
		double getReal1(){return real1;}
		double getReal2(){return real2;}
		double getImaginario1(){return imaginario1;}
		double getImaginario(){return imaginario2;}
		void suma();
		void resta();		
		void multiplicacion();		
		void division();		
		void print();
		void leer(){
			cout<<"Ingrese la parte real del primer mumero: ";
			cin>>real1;
			cout<<"Ingrese la parte imaginaria del primer mumero: ";
			cin>>imaginario1;
			fflush(stdin);
			cout<<"\nIngrese la parte real del segundo numero: ";
			cin>>real2;
			cout<<"Ingrese la parte imaginaria del segundo numero: ";
			cin>>imaginario2;
		}
};

Complejo::Complejo(){
	real1 = 0;
	imaginario1 = 0;
	real2=0;
	imaginario2=0;
	a=0;
	b=0;
}
void Complejo::suma(){
	a=real1+real2;
	b=imaginario1+imaginario2;
}
void Complejo::resta(){
	a=real1-real2;
	b=imaginario1-imaginario2;
}
void Complejo::multiplicacion(){
	a=real1*real2;
	b=imaginario1*imaginario2;
}
void Complejo::division(){
	a=real1/real2;
	b=imaginario1/imaginario2;
}
void Complejo::print(){
	cout<<a<<"(+i)"<<b<<endl;
}

int main(){
	system("color fc");
	Complejo numero;
	
	numero.leer();
	
	cout<<"\n\nSuma: ";
	numero.suma();
	numero.print();
	cout<<"\nResta: ";
	numero.resta();
	numero.print();
	cout<<"\nMultiplicacion: ";
	numero.multiplicacion();
	numero.print();	
	cout<<"\nDivision: ";
	numero.division();
	numero.print();
	cout<<"\n";
	
	system("pause");
	getch();
	return 0;
}