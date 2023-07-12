#include <iostream>
#include <stdlib.h>
using namespace std;

class Empleado
{
protected:
	string nombre, apellido, direccion, DNI, NTE, Supervisor;
	int AAE;
	double Salario;

public:
	Empleado(string nbr, string apl, string dirct, string dn_i, string nd_t, double Salari_o)
	{
		nombre = nbr;
		apellido = apl;
		direccion = dirct;
		DNI = dn_i;
		NTE = nd_t;
		Salario = Salari_o;
	}
	void imp()
	{
		cout << "Nombre:" << nombre << endl;
		cout << "Apellido:" << apellido << endl;
		cout << "Direccion:" << direccion << endl;
		cout << "DNI:" << DNI << endl;
		cout << "Numero de Telefono:" << NTE << endl;
		cout << "Salario:" << Salario << endl;
	}
	void CS()
	{
		cout << "Ingrese el nombre del Supervisor:" << endl;
		cin >> Supervisor;
	}
	virtual void ICRS() = 0;
};

class Secretario : public Empleado
{
private:
	string despacho;
	string numfax;
	double salariomax;

public:
	Secretario(string desp, string nfax, double slrmax, string nbr, string apl, string dirct, string dn_i, string nd_t, double Salari_o) : Empleado(nbr, apl, dirct, dn_i, nd_t, Salari_o)
	{
		despacho = desp;
		numfax = nfax;
		salariomax = slrmax;
	}
	void imp()
	{
		cout << "\nCARGO:SECRETARIO";
		cout << "\nDespacho: " << despacho;
		cout << "\nNumero de fax: " << numfax;
		cout << "\nSalariomax: " << salariomax;
		cout << "\nNombre:" << nombre;
		cout << "\nApellido:" << apellido;
		cout << "\nDireccion:" << direccion;
		cout << "\nDNI:" << DNI;
		cout << "\nNumero de Telefono:" << NTE;
		cout << "\nSalario:" << Salario << endl;
	}
	void ICRS()
	{
		double incremento;
		Salario *= 105 / 100;
	}
};

class Vendedor : public Empleado
{
private:
	string matricula;
	string marcacc;
	string modelocc;
	string areadv;
	string ldc;
	double pdv;
	double isa;

public:
	Vendedor(string mtr, string mrc, string modcc, string ardv, string ld, double pd, double is, string nbr, string apl, string dirct, string dn_i, string nd_t, double Salari_o) : Empleado(nbr, apl, dirct, dn_i, nd_t, Salari_o)
	{
		matricula = mtr;
		marcacc = mrc;
		modelocc = modcc;
		areadv = ardv;
		ldc = ld;
		pdv = pd;
		isa = is;
	}
	void imp()
	{
		cout << "\nCARGO: VENDEDOR";
		cout << "\nNombre:" << nombre;
		cout << "\nApellido:" << apellido;
		cout << "\nDireccion:" << direccion;
		cout << "\nDNI:" << DNI;
		cout << "\nNumero de Telefono:" << NTE;
		cout << "\nSalario:" << Salario << endl;
	}
	void danc()
	{
		cout << "CLIENTE DADO DE ALTA" << endl;
	}
	void dbnc()
	{
		cout << "CLIENTE DADO DE BAJA" << endl;
	}
	void cdc()
	{
		cout << "EL COCHE SE AH CAMBIADO" << endl;
	}
	void ICRS()
	{
		Salario *= 110 / 100;
	}
};

class JefedeZona : public Empleado
{
private:
	string despacho1;
	string secretarioac;
	string ldvac;
	string cocheemp;
	string mdc1;
	string modc1;
	string matricula1;

public:
	JefedeZona(string dp1, string sac, string ldac, string cemp, string md1, string mdc1, string matri1, string nbr, string apl, string dirct, string dn_i, string nd_t, double Salari_o) : Empleado(nbr, apl, dirct, dn_i, nd_t, Salari_o)
	{
		despacho1 = dp1;
		secretarioac = sac;
		ldvac = ldac;
		cocheemp = cemp;
		mdc1 = md1;
		modc1 = mdc1;
		matricula1 = matri1;
	}
	void imp()
	{
		cout << "\nCARGO: Jefe de zona\n";
		cout << "\nNombre:" << nombre;
		cout << "\nApellido:" << apellido;
		cout << "\nDireccion:" << direccion;
		cout << "\nDNI:" << DNI;
		cout << "\nNumero de Telefono:" << NTE;
		cout << "\nSalario:" << Salario << endl;
	}
	void cdsc()
	{
		cout << "SE AH CAMBIADO EL SECRETARIO" << endl;
	}
	void cdcoche()
	{
		cout << "EL COCHE SE AH CAMBIADO" << endl;
	}

	void vnda()
	{
		cout << "EL VENDEDOR SE AH DADO DE ALTA EN LA ZONA" << endl;
	}
	void vndb()
	{
		cout << "EL VENDEDOR SE AH DADO DE BAJA EN LA ZONA" << endl;
	}
	void ICRS()
	{
		Salario *= 120 / 100;
	}
};

int main(void)
{
	cout << "\n======================================\n";
	Secretario Arturo("DESPACHO DE ARTURO", "#64841348", 10000, "Arturo", "Gin", "AV Quito", "0850106188", "0912345678", 30000);
	Arturo.CS();
	Arturo.ICRS();
	Arturo.imp();
	cout << "\n======================================\n";
	Vendedor Juan("JBA1728", "Renault", "Sandero", "Quito", "4", 300, 500, "Juan", "Urrutia", "AV REY", "0811111111", "0922222222", 200);
	Juan.cdc();
	Juan.CS();
	Juan.danc();
	Juan.dbnc();
	Juan.ICRS();
	Juan.imp();
	cout << "\n======================================\n";
	JefedeZona Jenniffer("Despacho x", "Arturo", "5", "Coche", "Toyota", "Hilux", "PBE1572", "Jenniffer", "YYy", "AV Colon", "0844444444", "0933333333", 200);
	Jenniffer.cdcoche();
	Jenniffer.cdsc();
	Jenniffer.CS();
	Jenniffer.ICRS();
	Jenniffer.vnda();
	Jenniffer.vndb();
	Jenniffer.imp();
	cout << "\n======================================\n";
	system("pause");
}
