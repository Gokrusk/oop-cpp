#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void contar(char *);


char usuario[100];
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;

int main(){
	system("color 1b");
	
	pedirDatos();
	contar(usuario);
	
	getch();
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"Ingrese la frase: ";
	cin.getline(usuario,100,'\n');
	
	strupr(usuario);
}

void contar(char *usuario){
	for(int i=0; i<100; i++){
		switch(usuario[i]){
			case 'A': a++; break;
			case 'B': b++; break;
			case 'C': c++; break;
			case 'D': d++; break;
			case 'E': e++; break;
			case 'F': f++; break;
			case 'G': g++; break;
			case 'H': h++; break;
			case 'I': i++; break;
			case 'J': j++; break;
			case 'K': k++; break;
			case 'L': l++; break;
			case 'M': m++; break;
			case 'N': n++; break;
			case 'O': o++; break;
			case 'P': p++; break;
			case 'Q': q++; break;
			case 'R': r++; break;
			case 'S': s++; break;
			case 'T': t++; break;
			case 'U': u++; break;
			case 'V': v++; break;
			case 'W': w++; break;
			case 'X': x++; break;
			case 'Y': y++; break;
			case 'Z': z++; break;
		}
	}
	cout<<"\n\tCANTIDAD DE LETRAS REPETIDAS"<<endl;
	cout<<"letra a: "<<a<<endl;
	cout<<"letra b: "<<b<<endl;
	cout<<"letra c: "<<c<<endl;
	cout<<"letra d: "<<d<<endl;
	cout<<"letra e: "<<e<<endl;
	cout<<"letra f: "<<f<<endl;
	cout<<"letra g: "<<g<<endl;
	cout<<"letra h: "<<h<<endl;
	cout<<"letra i: "<<i<<endl;
	cout<<"letra j: "<<j<<endl;
	cout<<"letra k: "<<k<<endl;
	cout<<"letra l: "<<l<<endl;
	cout<<"letra m: "<<m<<endl;
	cout<<"letra n: "<<n<<endl;
	cout<<"letra o: "<<o<<endl;
	cout<<"letra p: "<<p<<endl;
	cout<<"letra q: "<<q<<endl;
	cout<<"letra r: "<<r<<endl;
	cout<<"letra s: "<<s<<endl;
	cout<<"letra t: "<<t<<endl;
	cout<<"letra u: "<<u<<endl;
	cout<<"letra v: "<<v<<endl;
	cout<<"letra w: "<<w<<endl;
	cout<<"letra x: "<<x<<endl;
	cout<<"letra y: "<<y<<endl;
	cout<<"letra z: "<<z<<endl;
}
