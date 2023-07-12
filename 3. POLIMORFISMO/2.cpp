#include<iostream>
#include <string.h>
using namespace std;

class letras
{
	private:
		char frase[100];
	public:
		void letras_q()
		{
			cout<<"Ingrese la frase: "<<endl;
			cin.getline(frase,100,'\n');
			int x;
			
			x=strlen(frase);
			int acumm[27];
			int acumM[27];
			char al[]="abcdefghijklmnopqrstuvwxyz";
			char AL[]="ABCDEFGHIJKLMNOPKRSTUVWXYZ";
			for(int l=0;l<27;l++)
			{
				acumm[l]=0;
				acumM[l]=0;
			}
			for(int i=0;i<27;i++)
			{
				for(int j=0;j<x;j++)
				{
					fflush(stdin);
					if(frase[j]==al[i])
					{
						acumm[i]++;
					}else if(frase[j]==AL[i])
							{
								acumM[i]++;
							}
				}
			}
			cout<<"Las letras que aparecen son: ";
			for(int i=0;i<27;i++)
			{
				if(acumm[i] ==1)
				{
					cout<<al[i]<<"  ";
				}
				if(acumM[i] ==1)
				{
					cout<<AL[i]<<"  ";
				}
			}
			cout<<" "<<endl;
		}
};
int main(void)
{
	cout<<"Cuantas frases deseas ingresar: "<<endl;
	int *n,s;
	cin>>s;
	n=&s;
	letras obj[*n];
	for(int k=0;k<*n;k++)
	{
		fflush(stdin);
		obj[k].letras_q();
	}
}
