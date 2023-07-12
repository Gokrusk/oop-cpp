#include "iostream"
using namespace std;
 
class fecha{
	private: 
		int dia, mes, anio;
	public:
		fecha(){
			dia = 0;
			mes = 0;
			anio = 0;
		}
		fecha(int di, int me, int an){
			dia= di;
			mes = me;
			anio = an;	
		}
	void set_dia(int d){
		dia = d;
	}
	void set_mes(int m){
		mes = m;
	}
	void set_anio(int a){
		anio= a;
	}
	const int get_dia(){
		return dia;
	}
	const int getMes(){
		return mes;
	}
	const int get_anio(){
		return anio;
	}

};

void leer(fecha f);
void imprimir(fecha f);
void salto();

int main(){
	fecha f1; //instancia objetos
    cout<<"FECHA 1:"<<endl;
    int dia, mes, anio;
    cout<<"INGRESE FECHA"<<endl;
	cout << "Ingrese la fecha: "<<endl;
	cout<<"Dia: ";
	cin>>dia;
	cout<< "Mes: ";
	cin >> mes;
	cout<< "Anio: ";
	cin >> anio;
    f1.set_dia(dia);
	f1.set_mes(mes);
	f1.set_anio(anio);
    cout<<"DIA: "<<f1.get_dia()<<endl;
	cout<<"MES: "<<f1.getMes()<<endl;
	cout<<"ANIO: "<<f1.get_anio()<<endl;
    salto();
	int dia2,mes2,anio2;
	cout<<"FECHA 2:"<<endl;
	cout<<"Dia: ";
	cin>>dia2;
	cout<< "Mes: ";
	cin >> mes2;
	cout<< "Anio: ";
	cin >> anio2;
	fecha f2(dia2,mes2,anio2);
	cout<<"DIA: "<<f2.get_dia()<<endl;
	cout<<"MES: "<<f2.getMes()<<endl;
	cout<<"ANIO: "<<f2.get_anio()<<endl;
	return 0;
}

void salto()
{
    cout<<"================"<<endl;
}