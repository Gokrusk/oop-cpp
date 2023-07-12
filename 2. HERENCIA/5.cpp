#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

class tres_raya{
	protected:
		char tabla [3][3];
	public:
		
		void introduccion(){
			char aux='1';
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					tabla [i][j]=aux++;
				}
			}
		}
		void tablero(){
			char aux='1';
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					if(j<2){
						cout<<" "<<tabla [i][j]<<" |";
					}else{
						cout<<" "<<tabla [i][j];
					}
				}
				if(i<2){
					cout<<"\n-----------\n";
				}	
			}
			cout<<"\n\n";
		}
		void jugador_1(){
			char aux;
			int k,i,j;
			
			do{
				
				do{
					cout<<"Jugador 1 coloca una ficha en la posicion deseada: ";
					fflush(stdin);
					cin>>aux;
				}while (aux < '1' || aux >'9');
				k=0;
				switch (aux){
					case '1':{
						i=0;
						j=0;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '2':{
						i=0;
						j=1;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '3':{
						i=0;
						j=2;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '4':{
						i=1;
						j=0;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '5':{
						i=1;
						j=1;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}	
				
					case '6':{
						i=1;
						j=2;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '7':{
						i=2;
						j=0;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '8':{
						i=2;
						j=1;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '9':{
						i=2;
						j=2;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
							
				}
				
			}while(k==1);
			
			tabla [i][j]= 'X';
		}
		void jugador_2(){
			char aux;
			int k,i,j;
			
			do{
				
				do{
					cout<<"Jugaodor 2 coloca una ficha en la posicion deseada: ";
					fflush(stdin);
					cin>>aux;
				}while (aux < '1' || aux >'9');
				k=0;
				switch (aux){
					case '1':{
						i=0;
						j=0;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '2':{
						i=0;
						j=1;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '3':{
						i=0;
						j=2;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '4':{
						i=1;
						j=0;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '5':{
						i=1;
						j=1;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}	
				
					case '6':{
						i=1;
						j=2;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '7':{
						i=2;
						j=0;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '8':{
						i=2;
						j=1;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}
					case '9':{
						i=2;
						j=2;
						if(tabla [i][j] == 'O'||tabla [i][j] == 'X'){
							k=1;
							cout<<"La casilla esta ocupada!\n\n ";
						}
						break;
					}		
				}
				
			}while(k==1);
			
			tabla [i][j]= 'O';
		}
		int ganador(){
			if(tabla [0][0] == 'O'||tabla [0][0] == 'X'){
				if(tabla [0][0] == tabla [0][1] && tabla [0][0] == tabla [0][2]){
					if(tabla [0][0] == 'X'){
						return 1;
					}else{
						return 0;
					}
				}
				if(tabla [0][0] == tabla [1][0] && tabla [0][0] == tabla [2][0]){
					if(tabla [0][0] == 'X'){
						return 1;
					}else{
						return 0;
					}
				}
			}
			if(tabla [1][1] == 'O'||tabla [1][1] == 'X'){
				if(tabla [1][1] == tabla [0][0] && tabla [1][1] == tabla [2][2]){
					if(tabla [1][1] == 'X'){
						return 1;
					}else{
						return 0;
					}
				}
				if(tabla [1][1] == tabla [1][0] && tabla [1][1] == tabla [1][2]){
					if(tabla [1][1] == 'X'){
						return 1;
					}else{
						return 0;
					}
				}
				if(tabla [1][1] == tabla [2][0] && tabla [1][1] == tabla [0][2]){
					if(tabla [1][1] == 'X'){
						return 1;
					}else{
						return 0;
					}
				}
				if(tabla [1][1] == tabla [0][1] && tabla [1][1] == tabla [2][1]){
					if(tabla [1][1] == 'X'){
						return 1;
					}else{
						return 0;
					}
				}
			}
			if(tabla [2][2] == 'O'||tabla [2][2] == 'X'){
				if(tabla [2][2] == tabla [2][0] && tabla [2][2] == tabla [2][1]){
					if(tabla [2][2] == 'X'){
						return 1;
					}else{
						return 0;
					}
				}
				if(tabla [2][2] == tabla [0][2] && tabla [2][2] == tabla [1][2]){
					if(tabla [2][2] == 'X'){
						return 1;
					}else{
						return 0;
					}
				}
			}
			return 2;
		}
		void setTabla(char tab [3][3]){tabla[3][3]=tab[3][3];}
		const char getTabla(){return tabla[3][3];}
};
class interfaz : public tres_raya{
	
	public:
		
		void loop(){
			int x=0;
			int g;
			int conta,contb;
			int op=1;
			do{
				//system("cls");
				
				introduccion();
			do{
				
				system("cls");
				tablero();
				if(x%2==0){
					jugador_1();
				}else{
					jugador_2();
				}
				g=ganador();
				
				x++;
			}while(x<=9 && g ==2);
			cout<<"__Puntuacion__\n";
				cout<<"Jugador 1: "<<conta<<endl;
				cout<<"Jugador 2: "<<contb<<endl;
			system("cls");
			tablero();
			if(g==1){
				cout<<"El jugador 1 gana la partida\n";
				conta=conta+1;
				
			}else if(g==0){
				cout<<"El jugador 1 gana la partida\n";
				contb=contb+1;
			}else{
				cout<<"Empate\n";
			}
				
				
				cout<<"Una partida mas!"<<endl;
				cout<<"1 = si"<<endl;
				cout<<"2 = no"<<endl;
				cin>>op;
			}while(op == 1);
		}
	
};
int main(void){
	interfaz juego;
	char tabladejuego [3][3];
	juego.setTabla(tabladejuego);
	juego.loop();
}

