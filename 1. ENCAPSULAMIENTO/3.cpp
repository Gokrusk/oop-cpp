#include <iostream>
using namespace std;

class articulo{
	private:
 		string nombre;
 		double precio;
	public:
 		articulo(){
 			nombre = " ";
 			precio = 0;
		 }
		void PVS(){
			double prq, prt;
			prq=precio * 0.15;
			prt=precio * 0.30;
			cout<<"--------------------------"<<endl;
			cout<<"Articulo: "<<nombre<<endl;
			cout<<"Precio: "<<precio<<endl;
			cout<<"Precio detal: "<<precio+prq<<endl;
			cout<<"Precio mayor: "<<precio+prt<<endl;
		}
		
	    void setNombre(string n){nombre = n;}
	    void setPrecio(double p){precio = p;}
	    const string getNombre() {return nombre; }
		const double getPrecio() {return precio; }
		
 };
 int main (void){
 	string nom;
 	double pre;
 	articulo A1;
 	cout<<"Ingrese el nombre del articulo "<<endl;
 	cin>>nom;
 	A1.setNombre(nom);
 	cout<<"Ingrese el precio del articulo "<<endl;
 	cin>>pre;
 	A1.setPrecio(pre);
 	A1.PVS();
 }

