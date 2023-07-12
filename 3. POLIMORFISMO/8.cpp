#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <sstream>

using namespace std;

//Prototipos de las funciones
void llenarArreglo(int);
void impRes(string, int[]);
int parseInt(string);

class procedimientos
{
    private:
        string *arreglo;
        int resultados[3];

    public:
        void setArreglo(int filas){
            string frase;
            arreglo = new string[filas];

            for (int i = 0; i < filas; i++)
            {
                cout << "Ingresa los Nombres y Apellidos  " << to_string(i + 1) << endl;
                getline(cin, frase);
                arreglo[i] = frase;
            }
        }
        void getCantLetDig(int filas)
        {
            int digitos = 0, letras = 0;
            for (int i = 0; i < filas; i++)
            {
                for (char const &c : arreglo[i])
                {
                    if (!isdigit(c) == 0)
                        digitos++;

                    else if (!isalpha(c) == 0)
                        letras++;
                }
            }

            resultados[0] = letras;
            resultados[1] = digitos;
        }
        void getFraseMasCorta(int filas)
        {
            string fraseMasCorta = arreglo[0];
            int posicion = 0;

            for (int i = 0; i < filas - 1; i++)
            {
                if (fraseMasCorta.length() < arreglo[i + 1].length())
                {
                    fraseMasCorta = arreglo[i + 1];
                    posicion = i + 1;
                }
            }

            resultados[2] = posicion;
        }
        void getResultados()
        {
            for (int i = 0; i < 4; i++)
            {
                switch (i)
                {
                case 0:
                    cout << "Numero de letras totales: " << resultados[i] << endl;
                    break;
                case 1:
                    cout << "Numero de digitos totales: " << resultados[i] << endl;
                    break;
                case 2:
                    cout << "Posicion del nombre mas largo: " << resultados[i] + 1 << endl;
                    break;
                default:
                    cout << "Nombre mas largo: " << endl;
                    cout << arreglo[resultados[i-1]] << endl;
                    break;
                }
            }
        }
};

int main(void)
{

    int filas;
    string entrada;
    procedimientos procedimiento = procedimientos();

    cout << "Cuantos nombres va a ingresar: " << endl;
    getline(cin, entrada);

    filas = parseInt(entrada);

    procedimiento.setArreglo(filas);
    procedimiento.getCantLetDig(filas);
    procedimiento.getFraseMasCorta(filas);
    procedimiento.getResultados();

    system("pause");
}

int parseInt(string x)
{
    int numero;
    stringstream parser(x);
    parser >> numero;
    return numero;
}
