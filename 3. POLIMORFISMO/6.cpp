#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <cstring>
using namespace std;

void leerFrases();
void contmayusculas();

int num;
string *frase;

int main(void)
{
  leerFrases();
  contmayusculas();
 
  delete []frase;
  system ("pause");
}

void leerFrases()
{ 
	cout<<"\tIngrese numero de frases: ";
	cin>>num;
	num+=1;
 
	frase = new string [num];
	for (int i=0; i<num;i++)
	{
		if(i!=0)
		cout<<"Frase "<<i<<": ";getline(cin,frase[i]);

    }
}
  
void contmayusculas()
{
	int cont=0,v[100],may=0,pos=0;
	string f;
    cout<<"\nCantidad de letras mayusculas"<<endl;
    for(int i=0;i<num;i++)
	{
 		f=frase[i];
		for(int i=0; i<f.size(); i++)
		{
			if((f[i]>='A') && (f[i]<='Z'))
			{
				cont++;
			}
		}
		if(i!=0)
		{
			cout<<"Frase "<<i<<": "<<cont<<endl;
			v[i]=cont;
			cont=0;
		}
	}
	may = v[1];
	for(int j=1;j<num;j++)
	{
    	if(v[j] > may)
		{
			may = v[j];
			pos = j;
		}
	}
	cout<<"\nFrase con mayor cantidad de letras: "<<v[pos]<<endl;
	cout<<"Cantidad: "<<may<<endl;
	
}
