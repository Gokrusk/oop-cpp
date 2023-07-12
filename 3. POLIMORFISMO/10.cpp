#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <cstring>
using namespace std;

void leerFrases();
void mayusculas();

int num;
string *frase;

int main(void)
{
  leerFrases();
  mayusculas();
 
  delete []frase;
  system ("pause");
}

void leerFrases()
{
   cout<<" Ingrese numero de frases: ";
   cin>>num;
   num+=1;
 
   frase = new string [num];
      for (int i =0; i<num;i++)
      {
 	      if(i!=0)
          cout<<" Frase "<<i<<": ";
          getline(cin,frase[i]);
      }
}
  
void mayusculas()
{
  int cont=0;
	string f;
  cout<<"Lista de palabras con Mayuscula inicial\n";
  for(int i=0;i<num;i++)
  {
    f=frase[i];
 	  for(int i=0; i<f.size(); i++)
    {
	    if((f[i]>='A') && (f[i]<='Z'))
      {
		    cont++;
	      for(int j=i; j<f.size() ;j++)
        {
          if(f[j] == ' ' || f[j] == '\0')j=f.size()+1;
          else
          if(f[j]!=' ')cout<<f[j];  
		    }
		    cout<<endl;
      }
	  }

	}
	
}
