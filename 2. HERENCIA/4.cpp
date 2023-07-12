//4.Simular el funcionamiento de un reloj calendario digital, en el que se implemente una alarma
#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<sstream>
#include<string>
using namespace std;

class reloj{
	protected:
		int h;
		int m;
		int s;
		int segundos;
		int temporizador;
	public:
		
		void alarma(int s){
 		int temporizador = 1;
 		while (true){
   		cout << temporizador << endl;
   		if (temporizador == s) cout << "** ALARMA **" << endl;
   			if (temporizador > s) cout << "\a"; //BEEP
   				Sleep(10); //1 segundo
   				temporizador++;   
 		}    
		}
		void verr(){
 			cout << "Segundos para que suene la alarma: ";
 			string se;
 			getline(cin, se);
 			int s;
 			if (istringstream(se) >> s)alarma(s);
		}

		void gotoxy(int x,int y){  
      		HANDLE hcon;  
     		hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      		COORD dwPos;  
      		dwPos.X = x;  
      		dwPos.Y= y;  
      		SetConsoleCursorPosition(hcon,dwPos); 
  		}
  		
		void hms(){
			cout<<"                                 RELOG DIGITAL"<<endl;
			for(h=0;h<23;h++){
				for(m=0;m<60;m++){
					for(s=0;s<60;s++){
						gotoxy(36,7);
						cout<<h<<":"<<m<<":"<<s<<endl;
						Sleep(1000);
					}
				}
			}
		}
};

class swit:public reloj{
	public:
		int x;
		void calc(){
		cout<<"======================================="<<endl;
		cout<<"1.-Reloj"<<endl;
		cout<<endl;
		cout<<"2.-Alarma"<<endl;
		cout<<"======================================="<<endl;
		cout<<endl;
		cout<<"Escoja la opcion que desee: ";cin>>x;
			switch(x){
				case 1:
					hms();
					break;
				case 2:	
				int l;
				alarma(l);
				    verr();
					break;
			}
		}

};


int main(){

	swit l1;
	l1.calc();
	
}
