#include<iostream>
#include<cstring>

using namespace std ;

bool palindromo(string frase);
int n,*cant;
int main(void)
{

	string frase;

	do{

		cout<<"Ingrese una frase: ";
		cin>>frase;


		if(palindromo(frase)){

			cout<<"Es un palindromo\n";

		} else {

			cout<<"No es un palindromo\n";

		}

		return (0);

	} while (true);

}



bool palindromo(string frase)
{

	int n = frase.length();

	string aux = "";

	for(int i=0; i<n; i++){

		if (

		frase[i] != ' ' &&

		frase[i] != ',' &&

		frase[i] != '.' &&

		frase[i] != ';' &&

		frase[i] != '\?' &&

		frase[i] != '�' &&

		frase[i] != '!' &&

		frase[i] != '�'

		){

			aux += frase[i];
		}
	}

	frase = aux;
	n=frase.length();

	for (int i=0; i<n/2; i++)
	{
		if(frase[i] != frase[n-i-1])
		{
			return false;
		}
	}
	return true;
}
