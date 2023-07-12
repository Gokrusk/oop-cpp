#include<iostream>
#include <string.h>
using namespace std;

void cantidad_m(char a[100]);

int main(void)
{
	char frase[100];
	int n,j=0;
	cout<<"Cuantas frase desea ingresar: "<<endl;
	cin>>n;
	
	while(j<n){
		cout<<"Frase #"<<j+1<<endl;
		cout<<"Ingrese la frase: "<<endl;
		fflush(stdin);
		cin.getline(frase,100,'\n');
		cantidad_m(frase);
		j++;
	}
	system("pause");
}

void cantidad_m(char a[100])
{
	int x,acum,*z;
	acum=0;
	x= strlen(a);
	for(int i=0;i<x;i++){
		if(a[i] != 'A' && a[i] != 'B'&& a[i] != 'C'&& a[i] != 'D'&& a[i] != 'E'&& a[i] != 'F'&& a[i]!= 'G'&& a[i] != 'H'&& a[i] != 'I'&& a[i] != 'J'&& a[i] != 'K'&& a[i] != 'L' && a[i] != 'M'&& a[i] != 'N'&& a[i] != '�'&& a[i] != 'O'&& a[i] != 'P'&& a[i] != 'Q'&& a[i] != 'R'&& a[i] != 'S'&& a[i] != 'T'&& a[i] != 'U'&& a[i] != 'V'&& a[i] != 'W'&& a[i] != 'X'&& a[i] != 'Y'&& a[i] != 'Z'){
			if(a[i] != ' '){
				acum++;	
				z= &acum;
			}		
		}	
	}
	cout<<"La cantidad de letras minusculas es: "<<*z<<endl;
}
